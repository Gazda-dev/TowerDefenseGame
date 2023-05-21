
#include "Tower/TowerProjectile.h"


ATowerProjectile::ATowerProjectile()
{

	PrimaryActorTick.bCanEverTick = true;

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));
	RootComponent = ProjectileMesh;

	Damage = 10;
}


void ATowerProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}


void ATowerProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATowerProjectile::SetDamage(int32 NewDamage)
{
	Damage = NewDamage;
}

