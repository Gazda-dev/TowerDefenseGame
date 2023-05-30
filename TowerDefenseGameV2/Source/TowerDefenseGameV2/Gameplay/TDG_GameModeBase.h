// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TDG_GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENSEGAMEV2_API ATDG_GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ATDG_GameModeBase();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "EnemySpawner #cpp")
	int32 CurrentWave;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "EnemySpawner #cpp")
	int32 EnemiesPerWave;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "EnemySpawner #cpp")
	int32 AliveEnemyCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnemySpawner #cpp")
	bool bShouldStartGame;

};
