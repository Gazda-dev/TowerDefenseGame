// © 2023 Gazda-dev 


#include "BasicEnemy.h"
#include "TowerDefenseGameV2/Tower/TDG_BaseTower.h"
#include "AIController.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/DamageType.h"

ABasicEnemy::ABasicEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	MovementSpeed = 300.f;
	AttackCooldown = 1.0f;
	AttackRange = 0.05f;
	Damage = 5.f;
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void ABasicEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	SetTargetTower();
}

void ABasicEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimeUntilNextAttack += DeltaTime;

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATDG_BaseTower::StaticClass(), FoundActors);
	if (FoundActors.Num() > 0)
	{
		if (AttackCooldown <= TimeUntilNextAttack)
		{
			AttackTower();
			TimeUntilNextAttack = 0.f;
		}

		SetTargetTower();
	}

}

void ABasicEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABasicEnemy::SetTargetTower()
{
	TArray<AActor*> FoundActor;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATDG_BaseTower::StaticClass(), FoundActor);
	if (FoundActor.Num() == 0)
	{
		return;
	}

	ATDG_BaseTower* ClosestTower = Cast<ATDG_BaseTower>(FoundActor[0]);
	float MinDistance = (ClosestTower->GetActorLocation() - GetActorLocation()).Size();

	for (int32 i = 1; i < FoundActor.Num(); i++)
	{
		float Distance = (FoundActor[i]->GetActorLocation() - GetActorLocation()).Size();
		if (Distance < MinDistance)
		{
			MinDistance = Distance;
			ClosestTower = Cast<ATDG_BaseTower>(FoundActor[i]);
		}
	}

	TowerTarget = ClosestTower;

	if (TowerTarget && GetController())
	{
		if (AAIController* AIController = Cast<AAIController>(GetController()))
		{
			AIController->MoveToActor(TowerTarget, 5.0f, true, true, true, nullptr, true);
		}
	}
}


void ABasicEnemy::AttackTower()
{
	if (AttackRange <= (TowerTarget->GetActorLocation() - GetActorLocation()).Size())
	{
		TowerTarget->TakeTowerDamage(Damage);
	}
}
