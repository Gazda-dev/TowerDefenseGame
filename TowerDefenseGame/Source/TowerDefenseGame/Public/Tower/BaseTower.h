

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseTower.generated.h"

UCLASS()
class TOWERDEFENSEGAME_API ABaseTower : public AActor
{
	GENERATED_BODY()
	
public:	

	ABaseTower();

	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;

};
