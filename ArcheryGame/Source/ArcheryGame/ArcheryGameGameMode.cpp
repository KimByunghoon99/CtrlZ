// Copyright Epic Games, Inc. All Rights Reserved.

#include "ArcheryGameGameMode.h"
#include "ArcheryGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArcheryGameGameMode::AArcheryGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
