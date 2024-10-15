// Copyright Epic Games, Inc. All Rights Reserved.

#include "Robot_Prototype_V2GameMode.h"
#include "Robot_Prototype_V2Character.h"
#include "UObject/ConstructorHelpers.h"

ARobot_Prototype_V2GameMode::ARobot_Prototype_V2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
