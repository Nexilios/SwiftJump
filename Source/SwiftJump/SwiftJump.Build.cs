// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SwiftJump : ModuleRules
{
	public SwiftJump(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
