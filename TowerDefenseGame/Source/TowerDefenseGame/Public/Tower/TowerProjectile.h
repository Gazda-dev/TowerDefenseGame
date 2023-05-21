
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TowerProjectile.generated.h"

UCLASS()
class TOWERDEFENSEGAME_API ATowerProjectile : public AActor
{
	GENERATED_BODY()
	
public:	

	ATowerProjectile();

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Projectile #cpp")
	void SetDamage(int32 NewDamage);

protected:

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Projectile #cpp")
	UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(EditAnywhere, Category = "Projectile #cpp")
	int32 Damage;
};
