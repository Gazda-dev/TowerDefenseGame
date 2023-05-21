
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TowerProjectile.generated.h"

UCLASS()
class TOWERDEFENSEGAME_API ATowerProjectile : public AActor
{
	GENERATED_BODY()
	
public:	

	ATowerProjectile();

	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;

};
