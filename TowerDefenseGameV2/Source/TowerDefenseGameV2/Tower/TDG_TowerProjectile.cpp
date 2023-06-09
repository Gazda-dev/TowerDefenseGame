// © 2023 Gazda-dev 


#include "TDG_TowerProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "TowerDefenseGameV2/Enemies/BasicEnemy.h"

ATDG_TowerProjectile::ATDG_TowerProjectile()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
	RootComponent = RootSceneComponent;

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));
	ProjectileMesh->SetupAttachment(GetRootComponent());
	ProjectileMesh->SetNotifyRigidBodyCollision(true);
	ProjectileMesh->SetupAttachment(RootSceneComponent);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile movement component"));
	ProjectileMovementComponent->UpdatedComponent = ProjectileMesh;
	ProjectileMovementComponent->InitialSpeed = 2000.0f;
	ProjectileMovementComponent->MaxSpeed = 2000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = false;
	ProjectileMovementComponent->ProjectileGravityScale = 0.f;
	
}

void ATDG_TowerProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	ProjectileMesh->OnComponentHit.AddDynamic(this, &ATDG_TowerProjectile::OnHit);
}


void ATDG_TowerProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ATDG_TowerProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	ABasicEnemy* Enemy = Cast<ABasicEnemy>(OtherActor);
	if(Enemy)
	{
		Enemy->TakeEnemyDamage(EnemyDamage);
		UE_LOG(LogTemp, Display, TEXT("Enemy hitted"));
		this->Destroy();
	}
	else
	{
		this->Destroy();
	}

}