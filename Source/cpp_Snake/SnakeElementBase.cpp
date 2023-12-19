// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeElementBase.h"
#include "Components/StaticMeshComponent.h"
#include "SnakeBase.h"


// Sets default values
ASnakeElementBase::ASnakeElementBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	meshComponent = CreateDefaultSubobject <UStaticMeshComponent> (TEXT("MeshComponent"));
	meshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	meshComponent->SetCollisionResponseToAllChannels(ECR_Overlap);
}

// Called when the game starts or when spawned
void ASnakeElementBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASnakeElementBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ASnakeElementBase::SetFirstElementType_Implementation()
{
	meshComponent->OnComponentBeginOverlap.AddDynamic(this, &ASnakeElementBase::HandleBeginOverlap);
}

void ASnakeElementBase::Interact(AActor* interactor, bool bIsHead)
{
	ASnakeBase* snake = Cast<ASnakeBase>(interactor);
	if (IsValid(snake))
	{
		snake->Destroy();
	}
}

void ASnakeElementBase::HandleBeginOverlap(UPrimitiveComponent* overlappedComponent, 
											AActor* otherActor,
											UPrimitiveComponent* otherComp, 
											int32 otherBodyIndex, 
											bool bFromSweep, 
											const FHitResult& sweepResult)
{
	if (IsValid(snakeOwner))
	{
		snakeOwner->SnakeElementOverlap(this,otherActor);
		otherActor->Destroy();
	}
}

void ASnakeElementBase::ToggleCollision()
{
	if (meshComponent->GetCollisionEnabled() == ECollisionEnabled::NoCollision)
	{
		meshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	}
	if (meshComponent->GetCollisionEnabled() != ECollisionEnabled::NoCollision)
	{
		meshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

