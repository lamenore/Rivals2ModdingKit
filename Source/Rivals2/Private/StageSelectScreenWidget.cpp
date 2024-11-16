#include "StageSelectScreenWidget.h"

UStageSelectScreenWidget::UStageSelectScreenWidget() {
    this->RPSWidgetInstance = NULL;
    this->StageButtonInstance = NULL;
    this->bIsInitialized = false;
    this->RPSWidget = NULL;
    this->BP_AlertPlayerContainer = NULL;
    this->BP_AlertPlayerNumTextBlock = NULL;
    this->BP_AlertActionTextBlock = NULL;
    this->BP_AlertActionObjectTextBlock = NULL;
    this->BP_StageBanButtonMappingDisplayer = NULL;
    this->BP_StarterAlertBar = NULL;
    this->BP_StarterScaleBox = NULL;
    this->BP_StartersVerticalBox = NULL;
    this->BP_CounterpickAlertBar = NULL;
    this->BP_CounterpickScaleBox = NULL;
    this->BP_CounterpickVerticalBox = NULL;
    this->BP_CasualAlertBar = NULL;
    this->BP_CasualScaleBox = NULL;
    this->BP_CasualVerticalBox = NULL;
    this->BP_DevelopmentAlertBar = NULL;
    this->BP_DevelopmentScaleBox = NULL;
    this->BP_DevelopmentVerticalBox = NULL;
    this->BP_NewRandomStageButton = NULL;
    this->BP_OnlineStateTimer = NULL;
}

void UStageSelectScreenWidget::UpdatePreviewHackFunction(URivalsStageData* RivalsStageData, URivalsStageSkinData* RivalsStageSkinData, const bool bIsRandom) {
}


bool UStageSelectScreenWidget::ShouldAutoStrikeCounterPicks() const {
    return false;
}

void UStageSelectScreenWidget::SelectStage(URivalsStageData* InSelectedStageData, APlayerController* InPlayerController, int32 OriginalStageIndex) {
}

void UStageSelectScreenWidget::SelectRandomStage(APlayerController* InPlayerController) {
}

void UStageSelectScreenWidget::RequestBackToCSS(APlayerController* InPlayerController) {
}

void UStageSelectScreenWidget::PopulateStageList() {
}

void UStageSelectScreenWidget::OnStageClicked(URivalsStageData* StageData, const int32& LocalPlayerIndex) {
}

void UStageSelectScreenWidget::OnStageBanRequested(URivalsStageData* SelectedStage, const int32& LocalPlayerIndex) {
}

void UStageSelectScreenWidget::OnInitSessionState(ERivalsSessionState SessionState) {
}

bool UStageSelectScreenWidget::IsRPSOpen() const {
    return false;
}


FStageSelectPlayerInfo UStageSelectScreenWidget::GetPlayerInfo(const int32& PlayerSlot) {
    return FStageSelectPlayerInfo{};
}

void UStageSelectScreenWidget::EnableStageStriking(const TArray<int32>& InPlayerSlots) {
}

void UStageSelectScreenWidget::CenterAllCursorsOnWidget(UWidget* Widget) {
}

void UStageSelectScreenWidget::BanStage(URivalsStageData* InSelectedStageData, int32 PlayerSlot) {
}


