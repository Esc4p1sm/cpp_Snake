// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "SnakeBase.generated.h"



class ASnakeElementBase;
UENUM()
enum class EMovementDirection
{
	UP,
	DOWN,
	LEFT,
	RIGHT
};

UCLASS()
class CPP_SNAKE_API ASnakeBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnakeBase();

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ASnakeElementBase>SnakeElementClass;

	UPROPERTY(EditDefaultsOnly)
	float elementSize;

	UPROPERTY()
	TArray<ASnakeElementBase*>snakeElements;

	UPROPERTY(EditDefaultsOnly)
	float movementSpeed;

	UPROPERTY()
	EMovementDirection lastMoveDirection;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void AddSnakeElement(int elementsNum=1);

	void Move();

	UFUNCTION()
	void SnakeElementOverlap(ASnakeElementBase* overlappedBlock,AActor* other);
};
