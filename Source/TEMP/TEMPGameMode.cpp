// Copyright Epic Games, Inc. All Rights Reserved.

#include "TEMPGameMode.h"
#include "TEMPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATEMPGameMode::ATEMPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
