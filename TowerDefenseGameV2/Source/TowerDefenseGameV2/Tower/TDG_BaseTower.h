// © 2023 Gazda-dev 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TDG_BaseTower.generated.h"

UCLASS()
class TOWERDEFENSEGAMEV2_API ATDG_BaseTower : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ATDG_BaseTower();
	virtual void Tick(float DeltaTime) override;

protected:
	
	virtual void BeginPlay() override;


};
