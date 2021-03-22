// Fill out your copyright notice in the Description page of Project Settings.


#include "Golem.h"

// Sets default values
AGolem::AGolem() {
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	sprintMul = 1.5f;


	// Create a first person camera component.
	FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	check(FPSCameraComponent != nullptr);

	// Attach the camera component to our capsule component.
	FPSCameraComponent->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));

	// Position the camera slightly above the eyes.
	FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));

	// Enable the pawn to control camera rotation.
	FPSCameraComponent->bUsePawnControlRotation = true;

	// Create a first person mesh component for the owning player.
	FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	check(FPSMesh != nullptr);

	// Only the owning player sees this mesh.
	FPSMesh->SetOnlyOwnerSee(true);

	// Attach the FPS mesh to the FPS camera.
	FPSMesh->SetupAttachment(FPSCameraComponent);

	// Disable some environmental shadows to preserve the illusion of having a single mesh.
	FPSMesh->bCastDynamicShadow = false;
	FPSMesh->CastShadow = false;

	// The owning player doesn't see the regular (third-person) body mesh.
	GetMesh()->SetOwnerNoSee(true);
}

// Called when the game starts or when spawned
void AGolem::BeginPlay() {
	Super::BeginPlay();
	
	check(GEngine != nullptr);

	// Display a debug message for five seconds. 
	// The -1 "Key" value argument prevents the message from being updated or refreshed.
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using FPSCharacter."));

}

// Called every frame
void AGolem::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGolem::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AGolem::MoveForward);
	PlayerInputComponent->BindAxis("Strafe", this, &AGolem::Strafe);
	PlayerInputComponent->BindAxis("Turn", this, &AGolem::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AGolem::AddControllerPitchInput);
	
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AGolem::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AGolem::StopJump);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AGolem::StartSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AGolem::StopSprint);
}

void AGolem::MoveForward(float Value) {
	// Find out which way is "forward" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AGolem::Strafe(float Value) {
	// Find out which way is "right" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void AGolem::StartJump() {
	bPressedJump = true;
}

void AGolem::StopJump() {
	bPressedJump = false;
}

void AGolem::StartSprint() {
	GetCharacterMovement()->MaxWalkSpeed *= sprintMul;
}

void AGolem::StopSprint() {
	GetCharacterMovement()->MaxWalkSpeed /= sprintMul;
}