// © 2023 Gazda-dev 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TowerPlacementLocation.generated.h"

class ATDG_BaseTower;
class UUserWidget;

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

	UFUNCTION(BlueprintCallable)
	void SpawnSimpleTower(TSubclassOf<ATDG_BaseTower> TowerClass);

	UFUNCTION(BlueprintCallable)
	void SpawnDiffTower();

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Tower placement #cpp")
	TSubclassOf<ATDG_BaseTower> TowerClassToSpawn;

	UPROPERTY(EditAnywhere, Category = "Tower placement #cpp")
	TSubclassOf<ATDG_BaseTower> SimpleTowerClassToSpawn;

	UPROPERTY(EditAnywhere, Category = "Tower placement #cpp")
	UStaticMeshComponent* PlacementMesh;
	
	UPROPERTY(EditAnywhere, Category = "Tower placement #cpp")
	class UBoxComponent* RootCollider;

	bool bIsTowerPlaced;
	ATDG_BaseTower* TowerInstance;

	UPROPERTY(EditAnywhere, Category = "Tower placement #cpp")
	TSubclassOf<UUserWidget> TowerSelectionHudClass;

	UUserWidget* TowerSelectionHud;

};
