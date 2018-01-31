// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSLaunchPadActor.generated.h"

class UStaticMeshComponent;
class UBoxComponent;

UCLASS()
class FPSGAME_API AFPSLaunchPadActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSLaunchPadActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when a pawn overlaps with this component.
	UFUNCTION()
	void OnPawnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	/** Box component to use as collision detector **/
	UPROPERTY(VisibleAnywhere, Category = "Components")
		UBoxComponent* BoxCollisionComp;

	/** The mesh for this object **/
	UPROPERTY(VisibleAnywhere, Category = "Components")
		UStaticMeshComponent* MeshComp;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
