// Copyright Epic Games, Inc. All Rights Reserved.

#include "homework_lsyGameMode.h"
#include "homework_lsyCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ahomework_lsyGameMode::Ahomework_lsyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
