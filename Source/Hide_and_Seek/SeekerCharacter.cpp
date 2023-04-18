// Fill out your copyright notice in the Description page of Project Settings.


#include "SeekerCharacter.h"

ASeekerCharacter::ASeekerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASeekerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASeekerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASeekerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

