// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tutorial01GameMode.h"
#include "Tutorial01Character.h"
#include "UObject/ConstructorHelpers.h"

ATutorial01GameMode::ATutorial01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
