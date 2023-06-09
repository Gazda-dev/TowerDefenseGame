// © 2023 Gazda-dev 

#pragma once

#include "CoreMinimal.h"
#include "BasicEnemy.h"
#include "Enemy1.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENSEGAMEV2_API AEnemy1 : public ABasicEnemy
{
	GENERATED_BODY()
	
public:

	AEnemy1();

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure)
	float GetHealthPercent();

protected:

	virtual void BeginPlay() override;
};
