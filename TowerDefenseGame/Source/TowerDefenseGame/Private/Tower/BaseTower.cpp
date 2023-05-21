

#include "Tower/TowerPlacementLocation.h"
#include "Tower/BaseTower.h"


ABaseTower::ABaseTower()
{

	PrimaryActorTick.bCanEverTick = true;

	TowerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TowerMesh"));
	RootComponent = TowerMesh;

	AttackRange = 1000.f;
	AttackCooldown = 1.f;
	MaxUpgradeLevel = 3;
	CurrentUpgradeLevel = 1;
	NextAttackTime = 0.f;
	TowerPlacement = nullptr;
}


void ABaseTower::UpgradeTower()
{
}

void ABaseTower::BeginPlay()
{
	Super::BeginPlay();
	
}


void ABaseTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseTower::SetTowerPlacement(ATowerPlacementLocation* PlacementLocation)
{
	TowerPlacement = PlacementLocation;
}

void ABaseTower::Attack()
{
}

