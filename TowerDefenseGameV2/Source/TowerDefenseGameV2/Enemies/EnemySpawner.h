// © 2023 Gazda-dev 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class TOWERDEFENSEGAMEV2_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	

	AEnemySpawner();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "EnemySpawner #cpp")
	TArray<TSubclassOf<class ABasicEnemy>> EnemyClasses;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "EnemySpawner #cpp")
	FFloatRange SpawnInterval;

protected:

	virtual void BeginPlay() override;

private:

	float TimeUntilNextSpawn = 0.f;
	void SpawnEnemy();
	void ResetSpawnTimer();
};
