// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThreadSampleGameMode.h"
#include "ThreadSampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThreadSampleGameMode::AThreadSampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
