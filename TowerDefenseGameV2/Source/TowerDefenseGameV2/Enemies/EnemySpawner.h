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

	int32 EnemySpawnedCount;

	void CheckEnemyCount();

	bool bIsWaveBreak;
	float WaveBreakTime;

protected:

	virtual void BeginPlay() override;

	void HandleEnemyDestroyed(ABasicEnemy* DestroyedEnemy);
	void EndWaveBreak();
private:

	float TimeUntilNextSpawn = 0.f;
	void SpawnEnemy();
	void ResetSpawnTimer();
	FTimerHandle TimerHandle;
	FTimerHandle WaveBreakTimerHandle;
};
