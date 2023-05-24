// © 2023 Gazda-dev 


#include "TDG_BaseTower.h"


ATDG_BaseTower::ATDG_BaseTower()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	TowerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TowerMesh"));
	RootComponent = TowerMesh;
}


void ATDG_BaseTower::BeginPlay()
{
	Super::BeginPlay();
	
}


void ATDG_BaseTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATDG_BaseTower::SetTowerPlacement(ATowerPlacementLocation* PlacementLocation)
{
	TowerPlacement = PlacementLocation;
}

void ATDG_BaseTower::Attack()
{
}

void ATDG_BaseTower::UpgradeTower()
{
}

