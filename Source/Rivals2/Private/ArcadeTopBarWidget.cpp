#include "ArcadeTopBarWidget.h"

UArcadeTopBarWidget::UArcadeTopBarWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_StageText = NULL;
    this->BP_RecordText = NULL;
    this->BP_TotalTime = NULL;
}

void UArcadeTopBarWidget::UpdateTotalTime() {
}

void UArcadeTopBarWidget::UpdateBestTime(FName CharacterName, ERivalsArcadeModeDifficultySetting Difficulty) {
}

void UArcadeTopBarWidget::UpdateArcadeInfo() {
}

FString UArcadeTopBarWidget::GetOpponentString(TArray<TSoftClassPtr<URivalsCharacterSkinDefinition>> Opponents) {
    return TEXT("");
}

FString UArcadeTopBarWidget::GetModeString() {
    return TEXT("");
}


