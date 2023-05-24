// © 2023 Gazda-dev 


#include "BasicEnemy.h"
#include "TowerDefenseGameV2/Tower/TDG_BaseTower.h"
#include "AIController.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

ABasicEnemy::ABasicEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	MovementSpeed = 300.f;
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void ABasicEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<AActor*> FoundActor;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATDG_BaseTower::StaticClass(), FoundActor);
	if (FoundActor.Num() > 0)
	{
		SetTargetTower(Cast<ATDG_BaseTower>(FoundActor[0]));
	}
}

void ABasicEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasicEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABasicEnemy::SetTargetTower(ATDG_BaseTower* NewTargetTower)
{
	TowerTarget = NewTargetTower;
	if (TowerTarget && GetController())
	{
		if (AAIController* AIController = Cast<AAIController>(GetController()))
		{
			AIController->MoveToActor(TowerTarget, 5.0f, true, true, true, nullptr, true);
		}
	}
}
