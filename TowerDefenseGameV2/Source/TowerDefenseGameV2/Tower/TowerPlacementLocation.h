// © 2023 Gazda-dev 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TowerPlacementLocation.generated.h"

UCLASS()
class TOWERDEFENSEGAMEV2_API ATowerPlacementLocation : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ATowerPlacementLocation();

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;

};
