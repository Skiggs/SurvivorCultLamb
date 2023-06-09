// Copyright Epic Games, Inc. All Rights Reserved.

#include "SurviorCultLambGameMode.h"
#include "SurviorCultLambPlayerController.h"
#include "SurviorCultLambCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASurviorCultLambGameMode::ASurviorCultLambGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASurviorCultLambPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}