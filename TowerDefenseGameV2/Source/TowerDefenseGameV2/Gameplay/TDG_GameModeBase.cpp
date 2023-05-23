// Fill out your copyright notice in the Description page of Project Settings.


#include "TDG_GameModeBase.h"
#include "TDG_PlayerController.h"
#include "PlayerCameraPawn.h"

ATDG_GameModeBase::ATDG_GameModeBase()
{
	PlayerControllerClass = ATDG_PlayerController::StaticClass();
	DefaultPawnClass = APlayerCameraPawn::StaticClass();
}
