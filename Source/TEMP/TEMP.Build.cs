// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TEMP : ModuleRules
{
	public TEMP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
