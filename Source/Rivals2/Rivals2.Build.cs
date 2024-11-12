using UnrealBuildTool;

public class Rivals2 : ModuleRules {
    public Rivals2(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AISupportModule",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "FMODStudio",
            "GameplayCameras",
            "HorizonUI",
            "InputCore",
            "LevelSequence",
            "MovieScene",
            "Niagara",
            "NiagaraAnimNotifies",
            "NiagaraUIRenderer",
            "Paper2D",
            "PingQoS",
            "PlayFab",
            "Slate",
            "SlateCore",
            "SnapNet",
            "SnapNetSample",
            "UMG",
        });
        
        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "MovieSceneTracks"
        });
    }
}
