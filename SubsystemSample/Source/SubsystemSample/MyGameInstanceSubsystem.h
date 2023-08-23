// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyGameInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class SUBSYSTEMSAMPLE_API UMyGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = Test)
	void UpdateScore(int score);
	UFUNCTION(BlueprintCallable, Category = Test)
	int GetScore();

private:
	int score_;
};
