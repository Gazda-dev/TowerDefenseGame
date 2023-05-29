// Fill out your copyright notice in the Description page of Project Settings.


#include "TDG_GameModeBase.h"
#include "TDG_PlayerController.h"
#include "PlayerCameraPawn.h"
#include "TowerDefenseGameV2/Enemies/EnemySpawner.h"

ATDG_GameModeBase::ATDG_GameModeBase()
{
	PlayerControllerClass = ATDG_PlayerController::StaticClass();
	DefaultPawnClass = APlayerCameraPawn::StaticClass();
}

int32 ATDG_GameModeBase::GetCurrentWave()
{
	int32 Wave;
	AEnemySpawner* Spawner = Cast<AEnemySpawner>(AEnemySpawner::StaticClass());
	if (Spawner)
	{

		Spawner->CurrentWave = Wave;
	}
	return Wave;
}
