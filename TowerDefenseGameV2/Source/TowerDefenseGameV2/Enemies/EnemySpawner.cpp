// © 2023 Gazda-dev 

#include "EnemySpawner.h"
#include "BasicEnemy.h"
#include "TowerDefenseGameV2/Tower/TDG_BaseTower.h"
#include "Kismet/GameplayStatics.h"
#include "TowerDefenseGameV2/Gameplay/TDG_GameModeBase.h"

AEnemySpawner::AEnemySpawner()
{
	PrimaryActorTick.bCanEverTick = true;

	SpawnInterval = FFloatRange(1.0f, 5.0f);
	EnemySpawnedCount = 0;
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

	ATDG_GameModeBase* GameMode = Cast<ATDG_GameModeBase>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		//UE_LOG(LogTemp, Display, TEXT("enemmiesperwave: %d"), GameMode->EnemiesPerWave);
		//UE_LOG(LogTemp, Display, TEXT("alivenemy: %d"), GameMode->AliveEnemyCount);
		//UE_LOG(LogTemp, Display, TEXT("Curr wave: %d"), GameMode->CurrentWave);

		if (!bIsWaveBreak && GameMode->bShouldStartGame)
		{
			TimeUntilNextSpawn -= DeltaTime;

			if (TimeUntilNextSpawn <= 0.0f)
			{
				SpawnEnemy();
				ResetSpawnTimer();
			}
		}
	}

}
void AEnemySpawner::SpawnEnemy()
{
	ATDG_GameModeBase* GameMode = Cast<ATDG_GameModeBase>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		if (EnemyClasses.Num() == 0 || EnemySpawnedCount >= GameMode->EnemiesPerWave)
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
				GameMode->AliveEnemyCount++;
			}
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
		ATDG_GameModeBase* GameMode = Cast<ATDG_GameModeBase>(UGameplayStatics::GetGameMode(this));
		if (GameMode)
		{
			GameMode->AliveEnemyCount--;

			if (GameMode->AliveEnemyCount <= 0 && GameMode->EnemiesPerWave == GameMode->EnemiesPerWave)
			{
				bIsWaveBreak = true;
				GetWorldTimerManager().SetTimer(WaveBreakTimerHandle, this, &AEnemySpawner::EndWaveBreak, WaveBreakTime, false);
			}
		}

	}

}

void AEnemySpawner::EndWaveBreak()
{
	ATDG_GameModeBase* GameMode = Cast<ATDG_GameModeBase>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		UE_LOG(LogTemp, Display, TEXT("endwave"));
		bIsWaveBreak = false;
		GameMode->CurrentWave++;
		GameMode->EnemiesPerWave = FMath::RandRange(GameMode->CurrentWave * 2, GameMode->CurrentWave * 3);
		EnemySpawnedCount = 0;
	}

}

void AEnemySpawner::ResetSpawnTimer()
{
	TimeUntilNextSpawn = FMath::RandRange(SpawnInterval.GetLowerBoundValue(), SpawnInterval.GetUpperBoundValue());
}


