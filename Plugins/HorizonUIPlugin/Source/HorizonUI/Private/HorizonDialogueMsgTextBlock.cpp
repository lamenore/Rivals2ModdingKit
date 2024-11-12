#include "HorizonDialogueMsgTextBlock.h"

UHorizonDialogueMsgTextBlock::UHorizonDialogueMsgTextBlock() {
    this->TextOverFlowWrapMethod = EHorizonDialogueTextOverflowWrapMethod::Normal;
    this->TextOverFlowWarpMethod = EHorizonDialogueTextOverflowWarpMethod_DEPRECATED::Invalidated;
    this->DialogueMsgSpeed = 0.01f;
    this->bIsStartTickDialogueMsg = false;
    this->bIsRepeatDialogueMsg = false;
    this->RepeatDialogueMsgInterval = 1.00f;
    this->bIsDialogueMsgText = false;
    this->bIsAutoNextDialogueMsgPage = true;
    this->AutoNextDialogueMsgPageIntervalRate = 0.01f;
    this->AutoNextDialogueMsgPageIntervalMin = 1.00f;
    this->AutoNextDialogueMsgPageIntervalMax = 10.00f;
    this->bIgnoreTimeDilation = false;
    this->CustomTimeDilation = 1.00f;
    this->bForceRebuildDialogueMsgText = false;
    this->bEnableBlinkingCursor = false;
    this->bIsRichText = true;
    this->Justification = ETextJustify::Left;
    this->DefaultButtonStyleWidgetClass = NULL;
}

void UHorizonDialogueMsgTextBlock::StopDialogue() {
}

void UHorizonDialogueMsgTextBlock::StartDialogue() {
}

void UHorizonDialogueMsgTextBlock::SkipDialogue() {
}

void UHorizonDialogueMsgTextBlock::SkipCurrentDialoguePage() {
}

void UHorizonDialogueMsgTextBlock::SkipCurrentDialogueMsgPageTick() {
}

void UHorizonDialogueMsgTextBlock::SetTextOverflowWrapMethod(EHorizonDialogueTextOverflowWrapMethod InOverflowWrapMethod) {
}

void UHorizonDialogueMsgTextBlock::SetTextAndRebuildDialogueImmediately(const FText& InText) {
}

void UHorizonDialogueMsgTextBlock::SetTextAndRebuildDialogue(const FText& InText) {
}

void UHorizonDialogueMsgTextBlock::SetShadowOffset(FVector2D InShadowOffset, bool bForce) {
}

void UHorizonDialogueMsgTextBlock::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity, bool bForce) {
}

void UHorizonDialogueMsgTextBlock::SetRepeatDialogueMsgInterval(float interval) {
}

void UHorizonDialogueMsgTextBlock::SetOpacity(float InOpacity) {
}

void UHorizonDialogueMsgTextBlock::SetJustification(TEnumAsByte<ETextJustify::Type> InJustification, bool bForce) {
}

void UHorizonDialogueMsgTextBlock::SetIsStartTickDialogueMsg(bool bShouldStartTick, bool bShouldResetDialogue) {
}

void UHorizonDialogueMsgTextBlock::SetIsRepeatDialogueMsg(bool B) {
}

void UHorizonDialogueMsgTextBlock::SetIsDialogueMsgText(bool B) {
}

void UHorizonDialogueMsgTextBlock::SetIsAutoNextDialogueMsgPage(bool B) {
}

void UHorizonDialogueMsgTextBlock::SetFontSize(int32 FontSize) {
}

void UHorizonDialogueMsgTextBlock::SetFont(FSlateFontInfo InFontInfo, bool bForce) {
}

void UHorizonDialogueMsgTextBlock::SetDialogueMsgSpeed(float Speed, bool bForce) {
}

void UHorizonDialogueMsgTextBlock::SetDialogueMsgPage(int32 InPageIndex, bool bShouldStartTick) {
}

void UHorizonDialogueMsgTextBlock::SetColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void UHorizonDialogueMsgTextBlock::SetAutoNextDialogueMsgPageIntervalRate(float InAutoNextDialogueMsgPageIntervalRate) {
}

void UHorizonDialogueMsgTextBlock::ResumeDialogue() {
}

void UHorizonDialogueMsgTextBlock::RequestRebuildDialogue() {
}

void UHorizonDialogueMsgTextBlock::RebuildDialogueMsgTextBlock() {
}

void UHorizonDialogueMsgTextBlock::PrevDialogueMsgPage(bool bShouldStartTick) {
}

void UHorizonDialogueMsgTextBlock::PauseDialogue() {
}

void UHorizonDialogueMsgTextBlock::NextDialogueMsgPage(bool bShouldStartTick) {
}

bool UHorizonDialogueMsgTextBlock::IsDialogueMsgPageEnd() const {
    return false;
}

bool UHorizonDialogueMsgTextBlock::IsDialogueMsgCompleted() const {
    return false;
}

EHorizonDialogueTextOverflowWrapMethod UHorizonDialogueMsgTextBlock::GetTextOverflowWrapMethod() const {
    return EHorizonDialogueTextOverflowWrapMethod::Normal;
}

int32 UHorizonDialogueMsgTextBlock::GetTextLength() const {
    return 0;
}

FText UHorizonDialogueMsgTextBlock::GetText() const {
    return FText::GetEmpty();
}

FText UHorizonDialogueMsgTextBlock::GetPageTextByIndex(int32 PageIndex) const {
    return FText::GetEmpty();
}

int32 UHorizonDialogueMsgTextBlock::GetNumPage() const {
    return 0;
}

int32 UHorizonDialogueMsgTextBlock::GetNumLine() const {
    return 0;
}

TEnumAsByte<ETextJustify::Type> UHorizonDialogueMsgTextBlock::GetJustification() const {
    return ETextJustify::Left;
}

int32 UHorizonDialogueMsgTextBlock::GetCurrentPageTextLength() const {
    return 0;
}

int32 UHorizonDialogueMsgTextBlock::GetCurrentPageIndex() {
    return 0;
}

UHorizonFlipbookWidget* UHorizonDialogueMsgTextBlock::GetBlinkCursorWidget() const {
    return NULL;
}


