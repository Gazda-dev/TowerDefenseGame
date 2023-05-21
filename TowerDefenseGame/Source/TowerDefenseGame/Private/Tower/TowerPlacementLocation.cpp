
#include "Tower/TowerPlacementLocation.h"
#include "Tower/BaseTower.h"


ATowerPlacementLocation::ATowerPlacementLocation()
{

	PrimaryActorTick.bCanEverTick = false;

	PlacementMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlacementMesh"));
	RootComponent = PlacementMesh;

	bIsTowerPlaced = false;
	TowerInstance = nullptr;
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
		//TSubclassOf<ASimpleTower> TowerClass = ASimpleTower::StaticClass();
		//SpawnTower(TowerClass);
	}
	else
	{
		UpgradeTower();
	}
}

void ATowerPlacementLocation::SpawnTower(TSubclassOf<ABaseTower> TowerClass)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	TowerInstance = GetWorld()->SpawnActor<ABaseTower>(TowerClass, GetActorTransform(), SpawnParams);
	if (TowerInstance)
	{
		TowerInstance->SetTowerPlacement(this);
		bIsTowerPlaced = true;
	}
}

void ATowerPlacementLocation::UpgradeTower()
{

}

