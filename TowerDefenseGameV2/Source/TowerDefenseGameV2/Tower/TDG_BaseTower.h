// © 2023 Gazda-dev 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TDG_BaseTower.generated.h"

class ATowerPlacementLocation;

UCLASS()
class TOWERDEFENSEGAMEV2_API ATDG_BaseTower : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ATDG_BaseTower();
	virtual void Tick(float DeltaTime) override;

	void SetTowerPlacement(ATowerPlacementLocation* PlacementLocation);

	UFUNCTION(BlueprintCallable, Category = "Tower #cpp")
	virtual void Attack();

	UFUNCTION(BlueprintCallable, Category = "Tower #cpp")
	void UpgradeTower();

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Tower #cpp")
	float AttackRange;

	UPROPERTY(EditAnywhere, Category = "Tower #cpp")
	float AttackCooldown;

	UPROPERTY(EditAnywhere, Category = "Tower #cpp")
	float TowerHealth;

	UPROPERTY(EditAnywhere, Category = "Tower #cpp")
	UStaticMeshComponent* TowerMesh;

	UPROPERTY(EditAnywhere, Category = "Tower #cpp")
	TSubclassOf<class ATDG_TowerProjectile> ProjectileClass;

	UPROPERTY(VisibleAnywhere, Category = "Tower #cpp")
	int32 MaxUpgradeLevel;

	int32 CurrentUpgradeLevel;
	float NextAttackTime;
	ATowerPlacementLocation* TowerPlacement;
};
