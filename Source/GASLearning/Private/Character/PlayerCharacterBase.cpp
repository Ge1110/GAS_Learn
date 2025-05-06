// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PlayerCharacterBase.h"

APlayerCharacterBase::APlayerCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(),FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision); 
}

UAbilitySystemComponent* APlayerCharacterBase::GetAbilitySystemComponent() const
{
	return GetAbilitySystemComponent();
}

void APlayerCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

