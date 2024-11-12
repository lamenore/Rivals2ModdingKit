using UnrealBuildTool;

public class Rivals2GameTarget : TargetRules {
	public Rivals2GameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		bOverrideBuildEnvironment = true;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		ExtraModuleNames.AddRange(new string[] {
			"Rivals2"
		});
	}
}
