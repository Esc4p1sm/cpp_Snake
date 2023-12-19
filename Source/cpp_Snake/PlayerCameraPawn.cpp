// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCameraPawn.h"
#include "Camera/CameraComponent.h"
#include "SnakeBase.h"
#include "Components/InputComponent.h"

// Sets default values
APlayerCameraPawn::APlayerCameraPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick =	true;
	pawnCamera =	CreateDefaultSubobject<UCameraComponent>(TEXT("PawnCamera"));
	RootComponent =	pawnCamera;
}

// Called when the game starts or when spawned
void APlayerCameraPawn::BeginPlay()
{
	Super::BeginPlay();
	SetActorRotation (FRotator(-90, 0, 0));
	CreatSnakeActor();
	
}

// Called every frame
void APlayerCameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent ->	BindAxis ("Vertical", this, &APlayerCameraPawn::HandlePlayerVerticalInput);
	PlayerInputComponent ->	BindAxis ("Horizontal", this, &APlayerCameraPawn::HandlePlayerHorizontalInput);

}

void APlayerCameraPawn::CreatSnakeActor()
{
	snakeActor = GetWorld() ->	SpawnActor<ASnakeBase>(snakeActorClass, FTransform());
}

void APlayerCameraPawn::HandlePlayerVerticalInput(float value)
{
	if (IsValid(snakeActor))
	{
		if (value > 0 && snakeActor -> lastMoveDirection != EMovementDirection::DOWN)
		{
			snakeActor -> lastMoveDirection = EMovementDirection::UP;
		}
	}
	if (value < 0 && snakeActor -> lastMoveDirection != EMovementDirection::UP)
	{
			snakeActor -> lastMoveDirection = EMovementDirection::DOWN;
	}
}

void APlayerCameraPawn::HandlePlayerHorizontalInput(float value)
{
	if (IsValid(snakeActor))
	{
		if (value > 0 && snakeActor -> lastMoveDirection != EMovementDirection::LEFT)
		{
			snakeActor -> lastMoveDirection = EMovementDirection::RIGHT;
		}
	}
	if (value < 0 && snakeActor -> lastMoveDirection !=	EMovementDirection::RIGHT)
	{
		snakeActor -> lastMoveDirection = EMovementDirection::LEFT;
	}
}


