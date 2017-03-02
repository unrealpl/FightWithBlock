// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class FIGHTWITHBLOCK_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

	UPROPERTY(VisibleAnywhere)
		class UCameraComponent* Camera;
	UPROPERTY(VisibleAnywhere)
		class USkeletalMeshComponent* FPSMesh;

protected:
	// Called when the game starts or when spawned

	float MoveSpeed = 1;

	virtual void BeginPlay() override;

	void MoveForward(float val);

	void MoveRight(float val);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};