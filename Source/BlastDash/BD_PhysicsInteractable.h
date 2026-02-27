// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BD_PhysicsInteractable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBD_PhysicsInteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BLASTDASH_API IBD_PhysicsInteractable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BlastDash|Physics")
	void ApplyCustomImpulse(FVector Impulse, bool bVelocityChange);
};
