// © 2023 Gazda-dev 


#include "Enemy1.h"

AEnemy1::AEnemy1()
{
	PrimaryActorTick.bCanEverTick = true;
	MovementSpeed = 10.f;
	EnemyMaxHealth = 100.f;
	EnemyHealth = EnemyMaxHealth;
	AttackRange = 5.f;
}

void AEnemy1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemy1::BeginPlay()
{
	Super::BeginPlay();
}

float AEnemy1::GetHealthPercent()
{
	return EnemyHealth / EnemyMaxHealth;
}