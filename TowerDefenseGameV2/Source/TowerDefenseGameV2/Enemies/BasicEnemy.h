// © 2023 Gazda-dev 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BasicEnemy.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnEnemyDestroyedDelegate, ABasicEnemy*);

class AEnemySpawner;

UCLASS()
class TOWERDEFENSEGAMEV2_API ABasicEnemy : public ACharacter
{
	GENERATED_BODY()

public:

	ABasicEnemy();
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetTargetTower();
	void TakeEnemyDamage(float EnemyDamage);

	AEnemySpawner* EnemySpawner = nullptr;
	static FOnEnemyDestroyedDelegate OnEnemyDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsAttacking = false;

protected:

	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category = "Enemy #cpp")
	UStaticMeshComponent* EnemyMesh;

	UPROPERTY(EditAnywhere, Category = "Enemy #cpp")
	float EnemyHealth;

	UPROPERTY(EditAnywhere, Category = "Enemy #cpp")
	float EnemyMaxHealth;

	UPROPERTY(EditAnywhere, Category = "Enemy #cpp")
	class ATDG_BaseTower* TowerTarget;

	UPROPERTY(EditAnywhere, Category = "Enemy #cpp")
	float MovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Enemy #cpp")
	float AttackRange;

	UPROPERTY(EditAnywhere, Category = "Enemy #cpp")
	float AttackCooldown;

	UPROPERTY(EditAnywhere, Category = "Enemy #cpp")
	float Damage;

	float TimeUntilNextAttack = 0.f;

	void AttackTower();

private:


};
