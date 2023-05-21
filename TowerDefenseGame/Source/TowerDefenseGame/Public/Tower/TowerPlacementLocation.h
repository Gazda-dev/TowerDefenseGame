

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TowerPlacementLocation.generated.h"

class ABaseTower;

UCLASS()
class TOWERDEFENSEGAME_API ATowerPlacementLocation : public AActor
{
	GENERATED_BODY()
	
public:	

	ATowerPlacementLocation();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* PlacementMesh;

	UFUNCTION(BlueprintCallable, Category = "Tower placement #cpp")
	void OnPlacementClicked();

	UFUNCTION(BlueprintCallable, Category = "Tower placement #cpp")
	void SpawnTower(TSubclassOf<ABaseTower> TowerClass);

	UFUNCTION(BlueprintCallable, Category = "Tower placement #cpp")
	void UpgradeTower();


protected:

	virtual void BeginPlay() override;

	bool bIsTowerPlaced;
	ABaseTower* TowerInstance;

};
