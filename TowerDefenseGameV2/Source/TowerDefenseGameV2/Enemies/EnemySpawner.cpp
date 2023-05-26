// © 2023 Gazda-dev 

#include "EnemySpawner.h"
#include "BasicEnemy.h"
#include "TowerDefenseGameV2/Tower/TDG_BaseTower.h"
#include "Kismet/GameplayStatics.h"

AEnemySpawner::AEnemySpawner()
{
	PrimaryActorTick.bCanEverTick = true;

	SpawnInterval = FFloatRange(1.0f, 5.0f);
	EnemySpawnedCount = 0;
}

void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	
	ResetSpawnTimer();
	GetWorldTimerManager().SetTimer(TimerHandle, this, &AEnemySpawner::CheckEnemyCount, 5.0f, true);
	ABasicEnemy::OnEnemyDestroyed.AddUObject(this, &AEnemySpawner::HandleEnemyDestroyed);
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
	

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATDG_BaseTower::StaticClass(), FoundActors);
	if (FoundActors.Num() > 0 && EnemySpawnedCount < 2)
	{
		TSubclassOf<ABasicEnemy> EnemyClassToSpawn = EnemyClasses[FMath::RandRange(0, EnemyClasses.Num() - 1)];
		if (ABasicEnemy* SpawnedEnemy = GetWorld()->SpawnActor<ABasicEnemy>(EnemyClassToSpawn, GetActorLocation(), GetActorRotation()))
		{
			SpawnedEnemy->EnemySpawner = this;
			SpawnedEnemy->SetTargetTower();
			EnemySpawnedCount++;
		}
	}
}

void AEnemySpawner::CheckEnemyCount()
{
	TArray<AActor*> FoundEnemies;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABasicEnemy::StaticClass(), FoundEnemies);
	EnemySpawnedCount = FoundEnemies.Num();
}

void AEnemySpawner::HandleEnemyDestroyed(ABasicEnemy* DestroyedEnemy)
{
	if (EnemySpawnedCount > 0)
	{
		EnemySpawnedCount--;
	}
}

void AEnemySpawner::ResetSpawnTimer()
{
	TimeUntilNextSpawn = FMath::RandRange(SpawnInterval.GetLowerBoundValue(), SpawnInterval.GetUpperBoundValue());
}


