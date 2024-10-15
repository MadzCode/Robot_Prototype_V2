// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Robot_Prototype_V2 : ModuleRules
{
	public Robot_Prototype_V2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
