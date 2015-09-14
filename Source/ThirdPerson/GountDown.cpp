// Fill out your copyright notice in the Description page of Project Settings.

#include "ThirdPerson.h"
#include "GountDown.h"


// Sets default values
AGountDown::AGountDown()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyIntProp = 42;
	MyCollisionComp = CreateDefaultSubobject<USphereComponent>(FName(TEXT("CollisionComponent")));
	MyCollisionComp->RelativeLocation = FVector::ZeroVector;
	MyCollisionComp->SetSphereRadius(20.0f, false);

}

// Called when the game starts or when spawned
void AGountDown::BeginPlay()
{
	Super::BeginPlay();

	Count = 0;

}

// Called every frame
void AGountDown::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );


	Count = Count + 1;
	GLog->Log(FString::FromInt(Count));
}

