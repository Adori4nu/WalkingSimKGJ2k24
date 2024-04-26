// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WalkingSimKGJ2k24 : ModuleRules
{
	public WalkingSimKGJ2k24(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
