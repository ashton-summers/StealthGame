// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSGameMode.generated.h"

UCLASS()
class AFPSGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	AFPSGameMode();

	// Called when the player pawn enters extraction zone with obj.
	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void MissionCompleted(APawn* pawn);

	void CompleteMission(APawn* InstigatorPawn);

};



