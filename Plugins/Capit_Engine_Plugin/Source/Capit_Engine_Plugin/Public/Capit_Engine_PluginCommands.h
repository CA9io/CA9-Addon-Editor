// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "Capit_Engine_PluginStyle.h"

class FCapit_Engine_PluginCommands : public TCommands<FCapit_Engine_PluginCommands>
{
public:

	FCapit_Engine_PluginCommands()
		: TCommands<FCapit_Engine_PluginCommands>(TEXT("Capit_Engine_Plugin"), NSLOCTEXT("Contexts", "Capit_Engine_Plugin", "Capit_Engine_Plugin Plugin"), NAME_None, FCapit_Engine_PluginStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;



public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};