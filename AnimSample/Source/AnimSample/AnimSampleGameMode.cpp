// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimSampleGameMode.h"
#include "AnimSampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnimSampleGameMode::AAnimSampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
