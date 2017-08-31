// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CppTestTutorialGameMode.h"
#include "CppTestTutorialHUD.h"
#include "CppTestTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACppTestTutorialGameMode::ACppTestTutorialGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACppTestTutorialHUD::StaticClass();
}
