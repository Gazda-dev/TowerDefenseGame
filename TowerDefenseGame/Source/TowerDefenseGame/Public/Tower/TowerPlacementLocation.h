

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TowerPlacementLocation.generated.h"

UCLASS()
class TOWERDEFENSEGAME_API ATowerPlacementLocation : public AActor
{
	GENERATED_BODY()
	
public:	

	ATowerPlacementLocation();

	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;


};
