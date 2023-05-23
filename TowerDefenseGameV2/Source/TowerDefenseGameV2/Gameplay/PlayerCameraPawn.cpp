// © 2023 Gazda-dev 


#include "PlayerCameraPawn.h"
#include "Components/InputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


APlayerCameraPawn::APlayerCameraPawn()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}


void APlayerCameraPawn::BeginPlay()
{
	Super::BeginPlay();
	
}


void APlayerCameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void APlayerCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//EnhancedInputComponent->BindAction(ClickAction, ETriggerEvent::Triggered, this, &APlayerCameraPawn::HandleClick);
	}
}

