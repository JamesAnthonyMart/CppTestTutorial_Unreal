// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CppTestTutorialHUD.generated.h"

UCLASS()
class ACppTestTutorialHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACppTestTutorialHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

