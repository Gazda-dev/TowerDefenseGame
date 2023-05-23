// © 2023 Gazda-dev 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TDG_TowerProjectile.generated.h"

UCLASS()
class TOWERDEFENSEGAMEV2_API ATDG_TowerProjectile : public AActor
{
	GENERATED_BODY()
	
public:	

	ATDG_TowerProjectile();
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;




};
