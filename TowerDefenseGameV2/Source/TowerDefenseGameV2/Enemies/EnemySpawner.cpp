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
	CurrentWave = 1;
	EnemiesPerWave = 3;
	bIsWaveBreak = false;
	WaveBreakTime = 5.f;
}

void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	
	ResetSpawnTimer();
	//GetWorldTimerManager().SetTimer(TimerHandle, this, &AEnemySpawner::CheckEnemyCount, 5.0f, true);
	ABasicEnemy::OnEnemyDestroyed.AddUObject(this, &AEnemySpawner::HandleEnemyDestroyed);
}

void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsWaveBreak)
	{
		TimeUntilNextSpawn -= DeltaTime;

		if (TimeUntilNextSpawn <= 0.0f)
		{
			SpawnEnemy();
			ResetSpawnTimer();
		}
	}

	UE_LOG(LogTemp, Display, TEXT("Curr wave: %d"), CurrentWave);
	UE_LOG(LogTemp, Display, TEXT("EnemySpawnedCount: %d"), EnemySpawnedCount);
	UE_LOG(LogTemp, Display, TEXT("enemmiesperwave: %d"), EnemiesPerWave);
	UE_LOG(LogTemp, Display, TEXT("alivenemy: %d"), AliveEnemyCount);
}
void AEnemySpawner::SpawnEnemy()
{
	if (EnemyClasses.Num() == 0 || EnemySpawnedCount >= EnemiesPerWave)
	{
		return;
	}
	

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATDG_BaseTower::StaticClass(), FoundActors);
	if (FoundActors.Num() > 0)
	{
		TSubclassOf<ABasicEnemy> EnemyClassToSpawn = EnemyClasses[FMath::RandRange(0, EnemyClasses.Num() - 1)];
		if (ABasicEnemy* SpawnedEnemy = GetWorld()->SpawnActor<ABasicEnemy>(EnemyClassToSpawn, GetActorLocation(), GetActorRotation()))
		{
			SpawnedEnemy->EnemySpawner = this;
			SpawnedEnemy->SetTargetTower();
			EnemySpawnedCount++;
			AliveEnemyCount++;
		}
	}
}

void AEnemySpawner::CheckEnemyCount()
{
	//TArray<AActor*> FoundEnemies;
	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABasicEnemy::StaticClass(), FoundEnemies);
	//EnemySpawnedCount = FoundEnemies.Num();
}

void AEnemySpawner::HandleEnemyDestroyed(ABasicEnemy* DestroyedEnemy)
{
	if (DestroyedEnemy->EnemySpawner == this)
	{
		AliveEnemyCount--;

		if (AliveEnemyCount <= 0 && EnemiesPerWave == EnemiesPerWave)
		{
			bIsWaveBreak = true;
			GetWorldTimerManager().SetTimer(WaveBreakTimerHandle, this, &AEnemySpawner::EndWaveBreak, WaveBreakTime, false);
		}
	}

}

void AEnemySpawner::EndWaveBreak()
{
	UE_LOG(LogTemp, Display, TEXT("endwave"));
	bIsWaveBreak = false;
	CurrentWave++;
	EnemiesPerWave = FMath::RandRange(CurrentWave * 2, CurrentWave * 3);
	EnemySpawnedCount = 0;
}

void AEnemySpawner::ResetSpawnTimer()
{
	TimeUntilNextSpawn = FMath::RandRange(SpawnInterval.GetLowerBoundValue(), SpawnInterval.GetUpperBoundValue());
}


