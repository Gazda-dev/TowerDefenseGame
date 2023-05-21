
#include "Tower/TowerProjectile.h"


ATowerProjectile::ATowerProjectile()
{

	PrimaryActorTick.bCanEverTick = true;

}


void ATowerProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}


void ATowerProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

