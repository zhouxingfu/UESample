// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"



void UMyGameInstanceSubsystem::UpdateScore(int score)
{
	score_ += score;
	UE_LOG(LogTemp, Log, TEXT("CURRENT SCORE = %d."), score_);
}


int UMyGameInstanceSubsystem::GetScore()
{
	UE_LOG(LogTemp, Log, TEXT("CURRENT SCORE = %d."), score_);
	return score_;
}