// Copyright Epic Games, Inc. All Rights Reserved.

#include "WalkingSimKGJ2k24GameMode.h"
#include "WalkingSimKGJ2k24Character.h"
#include "UObject/ConstructorHelpers.h"

AWalkingSimKGJ2k24GameMode::AWalkingSimKGJ2k24GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
