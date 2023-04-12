// Copyright Epic Games, Inc. All Rights Reserved.

#include "GZeroGameMode.h"
#include "GZeroCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGZeroGameMode::AGZeroGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_Character"));
	if (PlayerPawnBPClass.Class != nullptr){
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
