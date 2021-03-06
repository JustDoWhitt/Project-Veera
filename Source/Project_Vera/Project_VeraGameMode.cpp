// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Project_VeraGameMode.h"
#include "Project_VeraHUD.h"
#include "Project_VeraCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_VeraGameMode::AProject_VeraGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProject_VeraHUD::StaticClass();
}
