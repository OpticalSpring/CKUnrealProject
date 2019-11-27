// Fill out your copyright notice in the Description page of Project Settings.


#include "TankCharacter.h"
#include "AITankController.h"

// Sets default values
ATankCharacter::ATankCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//---------------------------------------------컴포넌트 구성
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	LeftWheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LEFTWHEEL"));
	RightWheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RIGHTWHEEL"));
	Turret = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TURRET"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));


	//---------------------------------------------부모 정의
	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);
	Body->SetupAttachment(GetCapsuleComponent());
	LeftWheel->SetupAttachment(Body);
	RightWheel->SetupAttachment(Body);
	Turret->SetupAttachment(Body);
	Body->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));

	//---------------------------------------------스태틱 매쉬
	ConstructorHelpers::FObjectFinder<UStaticMesh> BODY_MESH(TEXT("StaticMesh'/Game/Models/Tank_TankChassis.Tank_TankChassis'"));
	if (BODY_MESH.Succeeded()) {
		Body->SetStaticMesh(BODY_MESH.Object);
	}
	ConstructorHelpers::FObjectFinder<UStaticMesh> LEFTWHEEL_MESH(TEXT("StaticMesh'/Game/Models/Tank_TankTracksLeft.Tank_TankTracksLeft'"));
	if (LEFTWHEEL_MESH.Succeeded()) {
		LeftWheel->SetStaticMesh(LEFTWHEEL_MESH.Object);
	}
	ConstructorHelpers::FObjectFinder<UStaticMesh> RIGHTWHEEL_MESH(TEXT("StaticMesh'/Game/Models/Tank_TankTracksRight.Tank_TankTracksRight'"));
	if (RIGHTWHEEL_MESH.Succeeded()) {
		RightWheel->SetStaticMesh(RIGHTWHEEL_MESH.Object);
	}
	ConstructorHelpers::FObjectFinder<UStaticMesh> TURRET_MESH(TEXT("StaticMesh'/Game/Models/Tank_TankTurret.Tank_TankTurret'"));
	if (TURRET_MESH.Succeeded()) {
		Turret->SetStaticMesh(TURRET_MESH.Object);
	}
	//---------------------------------------------카메라 세팅
	SpringArm->TargetArmLength = 2000.0f;
	SpringArm->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
	SpringArm->bUsePawnControlRotation = false;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritRoll = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bDoCollisionTest = false;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 300.0f, 0.0f);
	GetCharacterMovement()->MaxAcceleration = 2000.0f;
	GetCharacterMovement()->MaxWalkSpeed = 2000.0f;
	GetCharacterMovement()->GroundFriction = 2.0f;
	GetCharacterMovement()->BrakingDecelerationWalking = 100.0f;

	 
	//-------------------------------------------AI 세팅
	AIControllerClass = AAITankController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

// Called when the game starts or when spawned
void ATankCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATankCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (DirectionToMove.SizeSquared() > 0.0f) {
		GetController()->SetControlRotation(FRotationMatrix::MakeFromX(DirectionToMove).Rotator());
		AddMovementInput(DirectionToMove);
	}

}

// Called to bind functionality to input
void ATankCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &ATankCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &ATankCharacter::LeftRight);
}

void ATankCharacter::UpDown(float NewAxisValue)
{
	DirectionToMove.X = NewAxisValue;
}

void ATankCharacter::LeftRight(float NewAxisValue)
{
	DirectionToMove.Y = NewAxisValue;
}

