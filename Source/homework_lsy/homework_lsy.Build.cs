// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class homework_lsy : ModuleRules
{
	public homework_lsy(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
