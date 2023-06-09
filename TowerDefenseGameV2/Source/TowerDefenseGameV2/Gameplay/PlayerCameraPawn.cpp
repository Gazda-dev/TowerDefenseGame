// © 2023 Gazda-dev 


#include "PlayerCameraPawn.h"
#include "Components/InputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "TowerDefenseGameV2/Tower/TowerPlacementLocation.h"
#include "TowerDefenseGameV2/Tower/TDG_BaseTower.h"
#include "Blueprint/UserWidget.h"
#include "TDG_GameModeBase.h"
#include "Kismet/GameplayStatics.h"


APlayerCameraPawn::APlayerCameraPawn()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	RootComponent = RootSceneComponent;

	PlayerSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm Component"));
	PlayerSpringArm->TargetArmLength = 1000.f;
	PlayerSpringArm->bUsePawnControlRotation = false;
	PlayerSpringArm->SetupAttachment(RootSceneComponent);
	PlayerSpringArm->bDoCollisionTest = false;

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
	Hud = CreateWidget<UUserWidget>(GetWorld(), HudClass);

	StartHud = CreateWidget<UUserWidget>(GetWorld(), StartGameClass);
	if (StartHud)
	{
		StartHud->AddToViewport();
	}
}
	


void APlayerCameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	ATDG_GameModeBase* GameMode = Cast<ATDG_GameModeBase>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		if (GameMode->bShouldStartGame)
		{
			StartHud->RemoveFromParent();

		/*	if (Hud)
			{
				Hud->AddToViewport();
			}*/
		}
	}
}


void APlayerCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(ClickAction, ETriggerEvent::Triggered, this, &APlayerCameraPawn::HandleClick);
		EnhancedInputComponent->BindAction(MoveXAction, ETriggerEvent::Triggered, this, &APlayerCameraPawn::MoveCameraX);
		EnhancedInputComponent->BindAction(MoveYAction, ETriggerEvent::Triggered, this, &APlayerCameraPawn::MoveCameraY);
	}
}

void APlayerCameraPawn::MoveCameraX(const FInputActionValue& Value)
{
	float AxisValue = Value.Get<float>() * 300.f;
	FVector CurrentLocation = GetActorLocation();
	FVector NewLocation = CurrentLocation + GetActorRightVector() * AxisValue;
	FVector InterpLocation = FMath::VInterpTo(CurrentLocation, NewLocation, GetWorld()->GetDeltaSeconds(), 8.0f);
	SetActorLocation(InterpLocation);
}

void APlayerCameraPawn::MoveCameraY(const FInputActionValue& Value)
{
	float AxisValue = Value.Get<float>() * 300.f;
	FVector CurrentLocation = GetActorLocation();
	FVector NewLocation = CurrentLocation + GetActorForwardVector() * AxisValue;
	FVector InterpLocation = FMath::VInterpTo(CurrentLocation, NewLocation, GetWorld()->GetDeltaSeconds(), 8.0f);
	SetActorLocation(InterpLocation);
}


void APlayerCameraPawn::HandleClick()
{
	FHitResult HitResult;
	GetWorld()->GetFirstPlayerController()->GetHitResultUnderCursor(ECC_Visibility, false, HitResult);

	UPrimitiveComponent* HitComponent = HitResult.GetComponent();

	if (HitComponent && HitComponent->GetOwner()->IsA(ATowerPlacementLocation::StaticClass()))
	{
		ATowerPlacementLocation* TowerPlacement = Cast<ATowerPlacementLocation>(HitComponent->GetOwner());
		if (TowerPlacement)
		{
			TowerPlacement->OnPlacementClicked();
		}
	}

	else if (HitComponent && HitComponent->GetOwner()->IsA(ATDG_BaseTower::StaticClass()))
	{
		//UE_LOG(LogTemp, Display, TEXT("Upgrade tower"));
	}
}