// © 2023 Gazda-dev 


#include "TDG_SimpleTower.h"
#include "TDG_TowerProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "TowerDefenseGameV2/Enemies/BasicEnemy.h"


ATDG_SimpleTower::ATDG_SimpleTower()
{
	PrimaryActorTick.bCanEverTick = true;

	AttackRange = 1000.f;
	AttackCooldown = 0.f;
	MaxTowerHealth = 200.f;
	TowerHealth = MaxTowerHealth;
	MaxUpgradeLevel = 3;
	CurrentUpgradeLevel = 1;
	NextAttackTime = 1.f;
	TowerDamageApplied = 20.f;
}

void ATDG_SimpleTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

float ATDG_SimpleTower::GetHealthPercent()
{
	return TowerHealth / MaxTowerHealth;
}

void ATDG_SimpleTower::BeginPlay()
{
	Super::BeginPlay();
}

void ATDG_SimpleTower::Attack()
{
	Super::Attack();

	if (NextAttackTime <= TimeSinceLastAttack)
	{
		TimeSinceLastAttack = 0.0f;


		TArray<ABasicEnemy*> EnemiesInRange = GetEnemiesInRange();

		if (EnemiesInRange.Num() > 0)
		{
			ABasicEnemy* TargetEnemy = EnemiesInRange[FMath::RandRange(0, EnemiesInRange.Num() - 1)];
			FVector DirectionToEnemy = (TargetEnemy->GetActorLocation() - GetActorLocation()).GetSafeNormal();
			int32 NumberOfProjectiles = FMath::RandRange(1, 3);

			for (int32 i = 0; i < NumberOfProjectiles; i++)
			{
				SpawnProjectile(DirectionToEnemy);
			}
		}
	}
}

void ATDG_SimpleTower::SpawnProjectile(const FVector& FireDirection)
{
	if (ProjectileClass && TowerPlacement)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		const float ProjectileSpawnOffset = 50.0f;

		TArray<FVector> Directions = { FVector(1,0,0), FVector(-1,0,0), FVector(0,1,0), FVector(0,-1,0) };
		for (const FVector Direction : Directions)
		{
			FVector SpawnLocation = GetActorLocation() + (Direction * ProjectileSpawnOffset);
			ATDG_TowerProjectile* Projectile = GetWorld()->SpawnActor<ATDG_TowerProjectile>
				(
					ProjectileClass,
					SpawnLocation,
					FireDirection.Rotation(),
					SpawnParams
				);

			if (Projectile)
			{
				if (Projectile->ProjectileMovementComponent)
				{
					Projectile->ProjectileMovementComponent->Velocity = FireDirection * Projectile->ProjectileMovementComponent->InitialSpeed;
					Projectile->EnemyDamage = this->TowerDamageApplied;
				}
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("ProjectileClass or TowerPlacement invalid"));
	}
}
