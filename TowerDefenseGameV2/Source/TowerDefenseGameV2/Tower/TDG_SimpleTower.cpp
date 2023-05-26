// © 2023 Gazda-dev 


#include "TDG_SimpleTower.h"
#include "TDG_TowerProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"


ATDG_SimpleTower::ATDG_SimpleTower()
{
	PrimaryActorTick.bCanEverTick = true;

	AttackRange = 1000.f;
	AttackCooldown = 0.f;
	MaxTowerHealth = 100.f;
	TowerHealth = MaxTowerHealth;
	MaxUpgradeLevel = 3;
	CurrentUpgradeLevel = 1;
	NextAttackTime = 1.f;
}

void ATDG_SimpleTower::Tick(float DeltaTime)
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
		int32 NumberOfProjectiles = FMath::RandRange(1, 3);

		if (TowerTarget)
		{

		}
	}
}

void ATDG_SimpleTower::SpawnProjectile()
{
	if (ProjectileClass && TowerPlacement)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		const float ProjectileSpawnOffset = 100.0f;
		FVector SpawnLocation = GetActorLocation() + (GetActorForwardVector() * ProjectileSpawnOffset);

		ATDG_TowerProjectile* Projectile = GetWorld()->SpawnActor<ATDG_TowerProjectile>
			(
				ProjectileClass,
				SpawnLocation,
				GetActorRotation(),
				SpawnParams
			);

		if (Projectile)
		{
			if (Projectile->ProjectileMovementComponent)
			{
				Projectile->ProjectileMovementComponent->Velocity = FVector(100, 0, 1000);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("ProjectileClass or TowerPlacement invalid"));
	}
}
