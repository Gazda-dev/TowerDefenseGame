// © 2023 Gazda-dev 


#include "TowerPlacementLocation.h"
#include "TDG_SimpleTower.h"



ATowerPlacementLocation::ATowerPlacementLocation()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}


void ATowerPlacementLocation::BeginPlay()
{
	Super::BeginPlay();
	
}


void ATowerPlacementLocation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATowerPlacementLocation::OnPlacementClicked()
{
	if (!bIsTowerPlaced)
	{
		//handle tower selection to choose a tower
		//for now player is choosing asimpletower
		TSubclassOf<ATDG_SimpleTower> TowerClass = ATDG_SimpleTower::StaticClass();
		SpawnTower(TowerClass);
		UE_LOG(LogTemp, Warning, TEXT("Tower spawned"));
	}
	else
	{
		UpgradeTower();
	}
}

void ATowerPlacementLocation::SpawnTower(TSubclassOf<ATDG_BaseTower> TowerClass)
{
}

void ATowerPlacementLocation::UpgradeTower()
{
}

