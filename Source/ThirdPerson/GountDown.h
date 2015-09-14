// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "GountDown.generated.h"

UCLASS()
class THIRDPERSON_API AGountDown : public AActor
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	int32 MyIntProp;

	UPROPERTY(EditAnywhere)
	USphereComponent* MyCollisionComp;

	// Sets default values for this actor's properties
	AGountDown();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	int Count;

};
