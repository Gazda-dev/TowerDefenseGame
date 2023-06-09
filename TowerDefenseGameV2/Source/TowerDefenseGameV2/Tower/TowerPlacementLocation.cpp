// © 2023 Gazda-dev 


#include "TowerPlacementLocation.h"
#include "TDG_SimpleTower.h"
#include "Components/BoxComponent.h"
#include "Blueprint/UserWidget.h"

ATowerPlacementLocation::ATowerPlacementLocation()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	PlacementMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlacementMeshComp"));
	RootComponent = PlacementMesh;
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
		/*TSubclassOf<ATDG_SimpleTower> TowerClass = TowerClassToSpawn;
		SpawnTower(TowerClass);
		UE_LOG(LogTemp, Warning, TEXT("Tower spawned"));*/
		TowerSelectionHud = CreateWidget<UUserWidget>(GetWorld(), TowerSelectionHudClass);
		if (TowerSelectionHud)
		{
			TowerSelectionHud->AddToViewport();
		}
	}
	else
	{
		UpgradeTower();
	}
}

void ATowerPlacementLocation::SpawnTower(TSubclassOf<ATDG_BaseTower> TowerClass)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	TowerInstance = GetWorld()->SpawnActor<ATDG_SimpleTower>(TowerClass, GetActorTransform(), SpawnParams);
	if (TowerInstance)
	{
		TowerInstance->SetTowerPlacement(this);
	}
}

void ATowerPlacementLocation::UpgradeTower()
{
}

void ATowerPlacementLocation::SpawnSimpleTower(TSubclassOf<ATDG_BaseTower> TowerClass)
{
	bIsTowerPlaced = true;
	Destroy();

	if (TowerSelectionHud)
	{
		TowerSelectionHud->RemoveFromParent();
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	TowerClass = SimpleTowerClassToSpawn;


	TowerInstance = GetWorld()->SpawnActor<ATDG_SimpleTower>(TowerClass, GetActorTransform(), SpawnParams);
	if (TowerInstance)
	{
		TowerInstance->SetTowerPlacement(this);
	}
}


void ATowerPlacementLocation::SpawnDiffTower()
{
	UE_LOG(LogTemp, Display, TEXT("Spawndifftower"));
}
