// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AnimSampleEditor : ModuleRules
{
	public AnimSampleEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "AnimGraph", "BlueprintGraph", "AnimSample" });
	}
}
