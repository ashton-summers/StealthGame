// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSBlackHole.generated.h"

class UStaticMeshComponent;
class USphereComponent;

UCLASS()
class FPSGAME_API AFPSBlackHole : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSBlackHole();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Mesh for our object **/
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp;

	/** Inner sphere that destroys overlapping components **/
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* InnerSphereComp;

	/** Outer sphere that pulls components in**/
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* OuterSphereComp;

	/* Called when component overlaps with inners phere */
	UFUNCTION()
	void OverlapInnerSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
