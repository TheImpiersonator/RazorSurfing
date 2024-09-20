// Copyright Epic Games, Inc. All Rights Reserved.

#include "RazorSurferGameMode.h"
#include "RazorSurferCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARazorSurferGameMode::ARazorSurferGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
