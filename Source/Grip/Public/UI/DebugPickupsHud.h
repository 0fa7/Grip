/**
*
* Pickups debugging HUD.
*
* Original author: Rob Baker.
* Current maintainer: Rob Baker.
*
* Copyright Caged Element Inc, code provided for educational purposes only.
*
***********************************************************************************/

#pragma once

#include "system/gameconfiguration.h"
#include "debughud.h"
#include "debugpickupshud.generated.h"

struct FPlayerPickupSlot;
class ABaseVehicle;

/**
* The debugging HUD for pickups.
***********************************************************************************/

UCLASS()
class ADebugPickupsHUD : public ADebugHUD
{
	GENERATED_BODY()

public:

#pragma region VehiclePickups

	// Draw the HUD.
	virtual void DrawHUD() override;

	// Draw a pickup slot for the HUD.
	void DrawSlot(int32 slotIndex, FPlayerPickupSlot& slot, ABaseVehicle* vehicle);

#pragma endregion VehiclePickups

};
