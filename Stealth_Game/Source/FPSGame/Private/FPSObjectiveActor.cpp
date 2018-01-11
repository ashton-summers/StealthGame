// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSObjectiveActor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FPSCharacter.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AFPSObjectiveActor::AFPSObjectiveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));
	RootComponent = MeshComp;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Comp"));
	SphereComp->SetupAttachment(MeshComp);

}

// Called when the game starts or when spawned
void AFPSObjectiveActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called when the objective is picked up
void AFPSObjectiveActor::PlayEffects()
{
	// Spawn the particle effects at the location of this object.
	UGameplayStatics::SpawnEmitterAtLocation(this, PickupFX, GetActorLocation());
}

// Called every frame
void AFPSObjectiveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSObjectiveActor::NotifyActorBeginOverlap(AActor * OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	AFPSCharacter* MyCharacter;

	// Play the pickup effect.
	PlayEffects();

	MyCharacter = Cast<AFPSCharacter>(OtherActor);

	// Cast successful
	if (MyCharacter)
	{
		MyCharacter->bIsCarryingObjective = true;
		Destroy();
	}
}

