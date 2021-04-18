// Fill out your copyright notice in the Description page of Project Settings.


#include "Golem.h"

// Sets default values
AGolem::AGolem() {
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	sprintMul = 2.0f;
	abilitySwitch = 0;

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
	PlayerInputComponent->BindAction<FFireDelegate>("Shoot1", IE_Pressed, this, &AGolem::Fire,false);
	PlayerInputComponent->BindAction<FFireDelegate>("Shoot2", IE_Pressed, this, &AGolem::Fire,true);
}

void AGolem::MoveForward(float Value) {
	// Find out which way is "forward" and record that the player wants to move that way.
	FRotator Direction = FRotator(0.0f, Controller->GetControlRotation().Yaw, 0.0f);
	AddMovementInput(FRotationMatrix(Direction).GetUnitAxis(EAxis::X), Value);
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

void AGolem::Fire(bool Invert) {
	if (abilitySwitch != 0) {
		return;
	}
	// Attempt to fire a projectile.
	if (ProjectileClass) {
		// Get the camera transform.
		FVector CameraLocation;
		FRotator CameraRotation;
		GetActorEyesViewPoint(CameraLocation, CameraRotation);

		// Set MuzzleOffset to spawn projectiles slightly in front of the camera.
		MuzzleOffset.Set(100.0f, 0.0f, 0.0f);

		// Transform MuzzleOffset from camera space to world space.
		FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);

		// Skew the aim to be slightly upwards.
		FRotator MuzzleRotation = CameraRotation;
		MuzzleRotation.Pitch += 0.0f;

		UWorld* World = GetWorld();
		if (World) {
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			// Spawn the projectile at the muzzle.
			AWindBall* Projectile = World->SpawnActor<AWindBall>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
			if (Projectile) {
				// Set the projectile's initial trajectory.
				Projectile->Inverse = Invert;
				FVector LaunchDirection = MuzzleRotation.Vector();
				Projectile->FireInDirection(LaunchDirection);
			}
		}
	}
}