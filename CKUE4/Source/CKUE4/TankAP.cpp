// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAP.h"


// Sets default values
ATankAP::ATankAP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 구체를 단순 콜리전 표현으로 사용합니다.
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	// 구체의 콜리전 반경을 설정합니다.
	CollisionComponent->InitSphereRadius(15.0f);
	CollisionComponent->SetGenerateOverlapEvents(true);
	// 루트 컴포넌트를 콜리전 컴포넌트로 설정합니다.
	RootComponent = CollisionComponent;
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	Body2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY2"));
	Body2->SetupAttachment(CollisionComponent);
	Body->SetupAttachment(Body2);
	//---------------------------------------------스태틱 매쉬
	ConstructorHelpers::FObjectFinder<UStaticMesh> BODY_MESH(TEXT("StaticMesh'/Game/Models/Shell.Shell'"));
	if (BODY_MESH.Succeeded()) {
		Body->SetStaticMesh(BODY_MESH.Object);
	}
	Body2->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, -90.0f, 0.0f));
	Body->SetRelativeLocationAndRotation(FVector(0.0f, -160.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));

	InitialLifeSpan = 10.0f;
	MovementSpeed = 3000;
}

// Called when the game starts or when spawned
void ATankAP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATankAP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector newLocation = GetTransform().GetLocation() + GetActorForwardVector() * MovementSpeed * DeltaTime;
	RootComponent->SetWorldLocation(newLocation);
}

void ATankAP::NotifyActorBeginOverlap(AActor * OtherActor)
{
	
		FHitResult HitResult;
		FCollisionQueryParams Params(NAME_None, false, this);
		bool bResult = GetWorld()->SweepSingleByChannel(
			HitResult,
			GetActorLocation(),
			GetActorLocation() + GetActorForwardVector() *200.0f,
			FQuat::Identity,
			ECollisionChannel::ECC_GameTraceChannel2,
			FCollisionShape::MakeSphere(50.0f),
			Params);

		if (bResult) {
			if (HitResult.Actor.IsValid()) {
				FDamageEvent DamageEvent;
				HitResult.Actor->TakeDamage(1.0f, DamageEvent, con, this);
				Destroy(this);
			}

		}
	
}
//
//void ATankAP::OnHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComponent, FVector NormalImpulse, const FHitResult & Hit)
//{
//	UE_LOG(LogTemp, Log, TEXT("Hit"));
//	if (OtherActor != this && OtherComponent->IsSimulatingPhysics())
//	{
//		UE_LOG(LogTemp, Log, TEXT("Hit2"));
//		FHitResult HitResult;
//		FCollisionQueryParams Params(NAME_None, false, this);
//		bool bResult = GetWorld()->SweepSingleByChannel(
//			HitResult,
//			GetActorLocation(),
//			GetActorLocation() + GetActorForwardVector() *200.0f,
//			FQuat::Identity,
//			ECollisionChannel::ECC_GameTraceChannel2,
//			FCollisionShape::MakeSphere(50.0f),
//			Params);
//
//		if (bResult) {
//			if (HitResult.Actor.IsValid()) {
//				FDamageEvent DamageEvent;
//				HitResult.Actor->TakeDamage(2.0f, DamageEvent, nullptr, this);
//				UE_LOG(LogTemp, Log, TEXT("Hit3"));
//			}
//
//		}
//	}
//}

