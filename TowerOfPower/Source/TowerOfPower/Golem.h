// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Golem.generated.h"

UCLASS()
class TOWEROFPOWER_API AGolem : public ACharacter {
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGolem();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character Movement: Walking");
	float sprintMul;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// Handles input for moving forward and backward.
	UFUNCTION()
		void MoveForward(float Value);

	// Handles input for moving right and left.
	UFUNCTION()
		void Strafe(float Value);

	// Sets jump flag when key is pressed.
	UFUNCTION()
		void StartJump();

	// Clears jump flag when key is released.
	UFUNCTION()
		void StopJump();

	// Sets sprint flag when key is pressed.
	UFUNCTION()
		void StartSprint();

	// Clears sprint flag when key is released.
	UFUNCTION()
		void StopSprint();
};
