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

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	RootComponent = RootSceneComponent;

	PlayerSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm Component"));
	PlayerSpringArm->TargetArmLength = 1000.f;
	PlayerSpringArm->bUsePawnControlRotation = false;
	PlayerSpringArm->SetupAttachment(RootSceneComponent);

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
	PlayerCamera->SetupAttachment(PlayerSpringArm);
}


void APlayerCameraPawn::BeginPlay()
{
	Super::BeginPlay();
	
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(PlayerMapping, 0);
		}
	}
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
		EnhancedInputComponent->BindAction(ClickAction, ETriggerEvent::Triggered, this, &APlayerCameraPawn::HandleClick);
	}
}

void APlayerCameraPawn::MoveCameraX(const FInputActionValue& Value)
{
	//MoveCamera(Value.Get<int>(), true);
	//float x = Value.Get<float>();
}

void APlayerCameraPawn::MoveCameraY(const FInputActionValue& Value)
{
}

void APlayerCameraPawn::MoveCamera(float AxisValue, bool bIsXAxis)
{

}

void APlayerCameraPawn::HandleClick()
{
}