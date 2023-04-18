// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SeekerCharacter.generated.h"

UCLASS()
class HIDE_AND_SEEK_API ASeekerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ASeekerCharacter();

protected:
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintImplementableEvent, Category = AI)
	FTransform GetAIEyesTransform() const;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
