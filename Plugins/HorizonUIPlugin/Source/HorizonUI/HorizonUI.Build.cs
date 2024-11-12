using UnrealBuildTool;

public class HorizonUI : ModuleRules {
    public HorizonUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "Paper2D",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
