using UnrealBuildTool;

public class RivalsStoryEditor : ModuleRules {
    public RivalsStoryEditor(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "Engine",
            "GeometryFramework",
            "Rivals2",
            "SnapNet",
            "UMG",
        });
    }
}
