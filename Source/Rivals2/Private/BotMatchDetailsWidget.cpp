#include "BotMatchDetailsWidget.h"

UBotMatchDetailsWidget::UBotMatchDetailsWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_BotMatchLevelText = NULL;
    this->BP_BotMatchTitleText = NULL;
    this->BP_OnLeveledUp = NULL;
    this->BP_OnUpdated = NULL;
    this->ParentCSS = NULL;
}

void UBotMatchDetailsWidget::UpdateText(const int32& NewLevel, const int32& PreviousLevel, UCharacterSelectScreen* InParent) {
}



