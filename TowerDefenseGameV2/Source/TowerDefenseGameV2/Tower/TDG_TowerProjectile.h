// © 2023 Gazda-dev 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TDG_TowerProjectile.generated.h"

class UProjectileMovementComponent;

UCLASS()
class TOWERDEFENSEGAMEV2_API ATDG_TowerProjectile : public AActor
{
	GENERATED_BODY()
	
public:	

	ATDG_TowerProjectile();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "Projectile #cpp")
	UProjectileMovementComponent* ProjectileMovementComponent;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	float EnemyDamage;

protected:

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Projectile #cpp")
	UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(VisibleAnywhere, Category = "Projectile #cpp")
	USceneComponent* RootSceneComponent;

};
