// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/PlayerCharacterBase.h"
#include "Components/BoxComponent.h"
#include "Interaction/EnemyInterface.h"
#include "EnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class GASLEARNING_API AEnemyCharacter : public APlayerCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	
public:
	
	virtual void HighLightActor() override;
	virtual void UnHighLightActor() override;
};
