// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSObjectiveActor.generated.h"

class USphereComponent;
class UStaticMesh;

UCLASS()
class FPSGAME_API AFPSObjectiveActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFPSObjectiveActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called whenever the objective is picked up
	void PlayEffects();

	/** Mesh for this object **/
	UPROPERTY(VisibleAnywhere, Category = "Components")
		UStaticMeshComponent* MeshComp;

	/** Collision sphere for this object **/
	UPROPERTY(VisibleAnywhere, Category = "Components")
		USphereComponent* SphereComp;

	/** Particle effects for picking up the objective **/
	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		UParticleSystem* PickupFX;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called every time a pawn overlaps with this.
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
