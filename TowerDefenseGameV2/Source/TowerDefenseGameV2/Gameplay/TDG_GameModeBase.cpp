// Fill out your copyright notice in the Description page of Project Settings.


#include "TDG_GameModeBase.h"
#include "TDG_PlayerController.h"
#include "PlayerCameraPawn.h"
#include "TowerDefenseGameV2/Enemies/EnemySpawner.h"

ATDG_GameModeBase::ATDG_GameModeBase()
{
	PlayerControllerClass = ATDG_PlayerController::StaticClass();
	DefaultPawnClass = APlayerCameraPawn::StaticClass();

	CurrentWave = 1;
	EnemiesPerWave = 3;
	bShouldStartGame = false;
}

void ATDG_GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

