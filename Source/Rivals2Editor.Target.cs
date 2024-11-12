using UnrealBuildTool;

public class Rivals2EditorTarget : TargetRules {
	public Rivals2EditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		bOverrideBuildEnvironment = true;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		ExtraModuleNames.AddRange(new string[] {
			"Rivals2"
		});
	}
}
