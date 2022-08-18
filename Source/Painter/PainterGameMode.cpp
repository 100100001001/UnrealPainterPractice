// Copyright Epic Games, Inc. All Rights Reserved.

#include "PainterGameMode.h"
#include "PainterHUD.h"
#include "PainterCharacter.h"
#include "UObject/ConstructorHelpers.h"

APainterGameMode::APainterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APainterHUD::StaticClass();
}
