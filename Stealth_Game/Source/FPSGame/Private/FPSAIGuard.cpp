// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSAIGuard.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/PawnNoiseEmitterComponent.h"
#include "Engine.h"
#include "FPSGameMode.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
AFPSAIGuard::AFPSAIGuard()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	PawnSensingComponent->bSeePawns = true;
	PawnSensingComponent->OnSeePawn.AddDynamic(this, &AFPSAIGuard::OnPawnSeen);
	PawnSensingComponent->OnHearNoise.AddDynamic(this, &AFPSAIGuard::OnNoiseHeard);
	GuardState = EAIState::Idle;
}

// Called when the game starts or when spawned
void AFPSAIGuard::BeginPlay()
{
	Super::BeginPlay();
	OriginalRotation = GetActorRotation();

	// Get all target points in the world for patrolling.
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), PatrolPoints);

	if (bShouldPatrol)
	{
		GoToPatrolPoint();
	}
	
}

// Called when a pawn is seen by this class
void AFPSAIGuard::OnPawnSeen(APawn* SeenPawn)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("SEEN"));
	if (SeenPawn == nullptr)
		return;

	DrawDebugSphere(GetWorld(), SeenPawn->GetActorLocation(), 32.f, 12, FColor::Yellow, false, 10.f);

	AFPSGameMode* GM = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());

	// Notify game mode that mission has been completed
	if (GM)
	{
		GM->CompleteMission(SeenPawn, false);
	}
	SetGuardState(EAIState::Alerted);
}

// Called when this class hears a noise 
void AFPSAIGuard::OnNoiseHeard(APawn* Instigator, const FVector & Location, float Volume)
{
	if (GuardState == EAIState::Alerted)
	{
		return;
	}

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("HEARD"));
	DrawDebugSphere(GetWorld(), Location, 32.f, 12, FColor::Red, false, 10.f);

	// Rotate the guard to the direction of the noise
	FVector Direction = Location - GetActorLocation();
	Direction.Normalize();
	FRotator NewLookAt = FRotationMatrix::MakeFromX(Direction).Rotator();
	NewLookAt.Pitch = 0.0f;
	NewLookAt.Roll = 0.0f;
	SetActorRotation(NewLookAt);

	// Set a timer that let's us know when to reset the guard's orientation
	FTimerHandle TimerHandle_ResetOrientation;
	GetWorldTimerManager().ClearTimer(TimerHandle_ResetOrientation);
	GetWorldTimerManager().SetTimer(TimerHandle_ResetOrientation, this, &AFPSAIGuard::ResetOrientation, 3.0f);
	
	// Stop the patrolling 
	GetController()->StopMovement();

	SetGuardState(EAIState::Suspicious);
}

// Resets the orientation of the this class after a set amount of time.
void AFPSAIGuard::ResetOrientation()
{
	if (GuardState == EAIState::Alerted)
	{
		return;
	}

	// Reset the actor orientation and continue moving to the current waypoint.
	UNavigationSystem::SimpleMoveToActor(GetController(), CurrentPatrolPoint);
	SetActorRotation(OriginalRotation);
	SetGuardState(EAIState::Idle);
}

/**
* Go to a patrol (target) point that is placed in the world
* @return nothing
*/
void AFPSAIGuard::GoToPatrolPoint()
{
	AActor* PatrolPoint = GetRandomPatrolPoint();
	CurrentPatrolPoint = PatrolPoint;
	UNavigationSystem::SimpleMoveToActor(GetController(), PatrolPoint);
}

/**
* Gets a random target point (aka the waypoint) for the guard to go to
* @return nothing
*/
ATargetPoint* AFPSAIGuard::GetRandomPatrolPoint()
{
	auto index = FMath::RandRange(0, PatrolPoints.Num() - 1);
	return Cast<ATargetPoint>(PatrolPoints[index]);
}

void AFPSAIGuard::SetGuardState(EAIState NewState)
{
	if (GuardState == NewState)
	{
		return;
	}
	
	GuardState = NewState;
	OnStateChanged(GuardState);
}

// Called every frame
void AFPSAIGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector GuardLocation = GetActorLocation();
	FVector PatrolPointLocation = CurrentPatrolPoint->GetActorLocation();
	FVector Delta = GuardLocation - PatrolPointLocation;

	float Distance = Delta.Size();
	UE_LOG(LogTemp, Warning, TEXT("%lf"), Distance);
	// Go to new patrol point if the guard is within 50 units
	// of the current patrol point
	if (Distance < 65 && bShouldPatrol)
	{
		GoToPatrolPoint();
	}
}



