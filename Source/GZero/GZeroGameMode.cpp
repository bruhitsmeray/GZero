// Copyright Epic Games, Inc. All Rights Reserved.

#include "GZeroGameMode.h"
#include "GZeroCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGZeroGameMode::AGZeroGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
