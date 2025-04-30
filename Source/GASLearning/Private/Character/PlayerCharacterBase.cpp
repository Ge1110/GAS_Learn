// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PlayerCharacterBase.h"

APlayerCharacterBase::APlayerCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

}

void APlayerCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

