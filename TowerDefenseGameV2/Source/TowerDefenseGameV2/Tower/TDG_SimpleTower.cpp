// © 2023 Gazda-dev 


#include "TDG_SimpleTower.h"

ATDG_SimpleTower::ATDG_SimpleTower()
{
	AttackRange = 1000.f;
	AttackCooldown = 100.f;
	TowerHealth = 100.f;
	MaxUpgradeLevel = 3;
	CurrentUpgradeLevel = 1;
	NextAttackTime = 0.2f;
}

void ATDG_SimpleTower::BeginPlay()
{
}

void ATDG_SimpleTower::Attack()
{
}

void ATDG_SimpleTower::SpawnProjectile()
{
}
