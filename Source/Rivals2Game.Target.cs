using UnrealBuildTool;

public class Rivals2GameTarget : TargetRules {
	public Rivals2GameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"Etalus",
			"Olympia",
			"Rivals2",
			"StateTreeModule",
			"VirtualCursor",
		});
	}
}
