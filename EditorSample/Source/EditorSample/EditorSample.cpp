// Copyright Epic Games, Inc. All Rights Reserved.

#include "EditorSample.h"
#include "Modules/ModuleManager.h"

//IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, EditorSample, "EditorSample" );

#define LOCTEXT_NAMESPACE "FEditorSampleModule"

void FEditorSampleModule::StartupModule()
{
	
}

void FEditorSampleModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FEditorSampleModule, AutoPakTool)