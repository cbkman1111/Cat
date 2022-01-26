// Copyright Epic Games, Inc. All Rights Reserved.
#include "CatGameModeBase.h"

void ACatGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	GEngine->AddOnScreenDebugMessage(-1, 3.0, FColor::Blue, TEXT("ACatGameModeBase::InitGame is called."));
}
