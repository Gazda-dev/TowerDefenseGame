// © 2023 Gazda-dev 

#include "EnemySpawner.h"
#include "BasicEnemy.h"
#include "TowerDefenseGameV2/Tower/TDG_BaseTower.h"
#include "Kismet/GameplayStatics.h"

AEnemySpawner::AEnemySpawner()
{
	PrimaryActorTick.bCanEverTick = true;

	SpawnInterval = FFloatRange(1.0f, 5.0f);
}

void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	
	ResetSpawnTimer();
}

void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimeUntilNextSpawn -= DeltaTime;

	if (TimeUntilNextSpawn <= 0.0f)
	{
		SpawnEnemy();
		ResetSpawnTimer();
	}
}
void AEnemySpawner::SpawnEnemy()
{
	if (EnemyClasses.Num() == 0)
	{
		return;
	}
	
	TSubclassOf<ABasicEnemy> EnemyClassToSpawn = EnemyClasses[FMath::RandRange(0, EnemyClasses.Num() - 1)];
	if (ABasicEnemy* SpawnedEnemy = GetWorld()->SpawnActor<ABasicEnemy>(EnemyClassToSpawn, GetActorLocation(), GetActorRotation()))
	{
		SpawnedEnemy->SetTargetTower();
	}

}

void AEnemySpawner::ResetSpawnTimer()
{
	TimeUntilNextSpawn = FMath::RandRange(SpawnInterval.GetLowerBoundValue(), SpawnInterval.GetUpperBoundValue());
}


