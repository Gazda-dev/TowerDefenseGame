// © 2023 Gazda-dev 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TowerPlacementLocation.generated.h"

class ATDG_BaseTower;

UCLASS()
class TOWERDEFENSEGAMEV2_API ATowerPlacementLocation : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ATowerPlacementLocation();
	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Tower placement #cpp")
	void OnPlacementClicked();

	UFUNCTION(BlueprintCallable, Category = "Tower placement #cpp")
	void SpawnTower(TSubclassOf<ATDG_BaseTower> TowerClass);

	UFUNCTION(BlueprintCallable, Category = "Tower placement #cpp")
	void UpgradeTower();

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Tower placement #cpp")
	TSubclassOf<ATDG_BaseTower> TowerClassToSpawn;

	UPROPERTY(EditAnywhere, Category = "Tower placement #cpp")
	UStaticMeshComponent* PlacementMesh;
	
	bool bIsTowerPlaced;
	ATDG_BaseTower* TowerInstance;

};
