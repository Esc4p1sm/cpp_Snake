// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeBase.h"
#include "Interactable.h"
#include "SnakeElementBase.h"
#include "Components/StaticMeshComponent.h"



// Sets default values
ASnakeBase::ASnakeBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	elementSize = 100.0f;
	movementSpeed = 10.0f;
	lastMoveDirection = EMovementDirection::DOWN;
}

// Called when the game starts or when spawned
void ASnakeBase::BeginPlay()
{
	Super::BeginPlay();
	SetActorTickInterval(movementSpeed);
	AddSnakeElement(5);
}

// Called every frame
void ASnakeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();

}

void ASnakeBase::AddSnakeElement(int elementsNum)
{
	for (int i = 0; i < elementsNum; ++i)
	{
		FVector newLocation(snakeElements.Num() * elementSize, 0, 0);
		FTransform newTransform(newLocation);
		ASnakeElementBase* newSnakeElement = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, newTransform);
		//newSnakeElement->AttachToActor(this,FAttachmentTransformRules::KeepRelativeTransform);
		newSnakeElement->snakeOwner = this;
		int32 elementIndex = snakeElements.Add(newSnakeElement);
		if (elementIndex == 0) 
		{
			newSnakeElement -> SetFirstElementType();
		}
		
		
	}

}

void ASnakeBase::Move()
{
	FVector movementVector(ForceInitToZero);
	 
	switch (lastMoveDirection)
	{
		case EMovementDirection::UP:
			movementVector.X += elementSize;
			break;
		case EMovementDirection::DOWN:
			movementVector.X -= elementSize;
			break;
		case EMovementDirection::LEFT:
			movementVector.Y += elementSize;
			break;
		case EMovementDirection::RIGHT:
			movementVector.Y -= elementSize;
			break;
	}
	snakeElements[0]->ToggleCollision();
	//AddActorWorldOffset(movementVector);
	for (int i = snakeElements.Num() - 1; i > 0; i--)
	{
		ASnakeElementBase* currentElement =	snakeElements[i];
		ASnakeElementBase* prevElement =	snakeElements[i - 1];
		FVector prevLocation = prevElement -> GetActorLocation();
		currentElement -> SetActorLocation(prevLocation);
	}
	snakeElements[0] -> AddActorWorldOffset(movementVector);
	snakeElements[0]->ToggleCollision();
}

void ASnakeBase::SnakeElementOverlap(ASnakeElementBase* overlappedBlock,AActor* other)
{
	if (IsValid(overlappedBlock))
	{
		int32 elemIndex;
		snakeElements.Find(overlappedBlock, elemIndex);
		bool bIsFirst = elemIndex == 0;
		IInteractable* interfaceInter = Cast<IInteractable>(other);
		if (interfaceInter)
		{
			interfaceInter->Interact(this, bIsFirst);
		}
		
	}
}



