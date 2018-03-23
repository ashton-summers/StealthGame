// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSAIGuard.generated.h"

class UPawnSensingComponent;
class UNavigationSystem;

UENUM(BlueprintType)
enum class EAIState : uint8
{
	Idle, 
	Suspicious,
	Alerted
};

UCLASS()
class FPSGAME_API AFPSAIGuard : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSAIGuard();

// Protected functions
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when the guard sees a pawn.
	UFUNCTION()
	void OnPawnSeen(APawn* SeenPawn);
	
	// Called when the guard hears a noise.
	UFUNCTION()
	void OnNoiseHeard(APawn* NoiseInstigator, const FVector& Location, float Volume);

	UFUNCTION()
	void ResetOrientation();

	UFUNCTION(BlueprintImplementableEvent, Category = "AI")
	void OnStateChanged(EAIState NewState);

	/**
	* Go to a patrol (target) point that is placed in the world
	* @return nothing
	*/
	UFUNCTION()
	void GoToPatrolPoint();

	/**
	* Gets a random target point (aka the waypoint) for the guard to go to
	* @return nothing
	*/
	UFUNCTION()
	ATargetPoint* GetRandomPatrolPoint();

	// Set's the guard's attention state
	void SetGuardState(EAIState NewState);

// Components / Properties
protected:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UPawnSensingComponent* PawnSensingComponent;

	UPROPERTY(EditAnywhere, Category = "AIProperties")
	bool bShouldPatrol;

private:
	// Member variables
	FRotator OriginalRotation;
	EAIState GuardState;
	TArray<AActor*> PatrolPoints;
	AActor* CurrentPatrolPoint;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
