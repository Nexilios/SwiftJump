// Copyright Epic Games, Inc. All Rights Reserved.

#include "SwiftJumpGameMode.h"
#include "SwiftJumpCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASwiftJumpGameMode::ASwiftJumpGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
