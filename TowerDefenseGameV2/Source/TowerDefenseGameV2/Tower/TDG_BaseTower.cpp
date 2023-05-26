// © 2023 Gazda-dev 


#include "TDG_BaseTower.h"
#include "GameFramework/DamageType.h"
#include "TowerDefenseGameV2/Enemies/BasicEnemy.h"
#include "Kismet/GameplayStatics.h"


ATDG_BaseTower::ATDG_BaseTower()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	TowerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TowerMesh"));
	RootComponent = TowerMesh;
	TowerDamageApplied = 5.0f;
}


void ATDG_BaseTower::BeginPlay()
{
	Super::BeginPlay();
	
}




void ATDG_BaseTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimeSinceLastAttack += DeltaTime;

	if (TowerHealth <= 0)
	{
		Destroy();
		UE_LOG(LogTemp, Warning, TEXT("SimpleTowerHealth < 0, Destroying..."))
	}
	Attack();
}

TArray<ABasicEnemy*> ATDG_BaseTower::GetEnemiesInRange()
{
	TArray<AActor*> AllEnemies;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABasicEnemy::StaticClass(), AllEnemies);
	TArray<ABasicEnemy*> EnemiesInRange;

	for (AActor* EnemyActor : AllEnemies)
	{
		ABasicEnemy* Enemy = Cast<ABasicEnemy>(EnemyActor);

		if (Enemy)
		{
			float DistanceToEnemy = (Enemy->GetActorLocation() - GetActorLocation()).Size();

			if (DistanceToEnemy <= AttackRange)
			{
				EnemiesInRange.Add(Enemy);
			}
		}
	}

	return EnemiesInRange;
}

void ATDG_BaseTower::SetTowerPlacement(ATowerPlacementLocation* PlacementLocation)
{
	TowerPlacement = PlacementLocation;
}

void ATDG_BaseTower::Attack()
{
}

void ATDG_BaseTower::UpgradeTower()
{
}

void ATDG_BaseTower::TakeTowerDamage(float TowerDamage)
{
	if (TowerHealth >= 0.f)
	{
		TowerHealth -= TowerDamage;
	}
	else
	{
		Destroy();
	}
}


