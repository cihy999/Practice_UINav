// Copyright Epic Games, Inc. All Rights Reserved.

#include "UINavGameMode.h"
#include "UINavCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUINavGameMode::AUINavGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
