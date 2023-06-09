// © 2023 Gazda-dev 

#pragma once

#include "CoreMinimal.h"
#include "TDG_BaseTower.h"
#include "TDG_SimpleTower.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENSEGAMEV2_API ATDG_SimpleTower : public ATDG_BaseTower
{
	GENERATED_BODY()
	
public:
	ATDG_SimpleTower();
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure, Category = "SimpleTower #cpp")
	float GetHealthPercent();

protected:

	virtual void BeginPlay() override;
	virtual void Attack() override;

private:

	void SpawnProjectile(const FVector& FireDirection);
};
