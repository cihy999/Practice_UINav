// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UINav : ModuleRules
{
	public UINav(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
