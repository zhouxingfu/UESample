// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AnimSample : ModuleRules
{
	public AnimSample(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "AnimGraphRuntime"});
	}
}
