// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSLaunchPadActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine.h"

// Sets default values
AFPSLaunchPadActor::AFPSLaunchPadActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialize the box component.
	BoxCollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Comp"));
	BoxCollisionComp->SetBoxExtent(FVector(100, 70, 10));
	BoxCollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AFPSLaunchPadActor::OnPawnOverlap);
	BoxCollisionComp->bGenerateOverlapEvents = true;
	RootComponent = BoxCollisionComp;


	// Initialize the mesh component.
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));
	MeshComp->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AFPSLaunchPadActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called when a pawn overlaps with this component.
void AFPSLaunchPadActor::OnPawnOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Pawn Overlap"));
	ACharacter* MyCharacter;
	FRotator LaunchDirection = GetActorRotation();
	LaunchDirection.Pitch = 35.f;
	FVector LaunchVelocity = LaunchDirection.Vector() * 3500;

	MyCharacter = Cast<ACharacter>(OtherActor);

	if (MyCharacter)
	{
		MyCharacter->LaunchCharacter(LaunchVelocity, false, false);
	}
}

// Called every frame
void AFPSLaunchPadActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

