// © 2023 Gazda-dev 

#pragma once

#include "InputActionValue.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerCameraPawn.generated.h"

class UInputAction;
class UInputMappingContext;
class UCameraComponent;
class USpringArmComponent;
class UUserWidget;

UCLASS()
class TOWERDEFENSEGAMEV2_API APlayerCameraPawn : public APawn
{
	GENERATED_BODY()

public:

	APlayerCameraPawn();
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	
	virtual void BeginPlay() override;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Components #cpp")
	USpringArmComponent* PlayerSpringArm;

private:

	UPROPERTY(EditAnywhere, Category = "Player Components #cpp")
	UCameraComponent* PlayerCamera;

	UPROPERTY(EditAnywhere, Category = "Player Components #cpp")
	USceneComponent* RootSceneComponent;

	UPROPERTY(EditAnywhere, Category = "Player #cpp")
	UInputAction* ClickAction;

	UPROPERTY(EditAnywhere, Category = "Player #cpp")
	UInputAction* MoveYAction;

	UPROPERTY(EditAnywhere, Category = "Player #cpp")
	UInputAction* MoveXAction;

	UPROPERTY(EditAnywhere, Category = "Player #cpp")
	UInputMappingContext* PlayerMapping;

	UPROPERTY(EditAnywhere, Category = "Player #cpp")
	TSubclassOf<UUserWidget> HudClass;

	UPROPERTY()
	UUserWidget* Hud;

	UPROPERTY(EditAnywhere, Category = "Player #cpp")
	TSubclassOf<UUserWidget> StartGameClass;

	UPROPERTY()
	UUserWidget* StartHud;

	void MoveCameraX(const FInputActionValue& Value);
	void MoveCameraY(const FInputActionValue& Value);
	void HandleClick();
};
