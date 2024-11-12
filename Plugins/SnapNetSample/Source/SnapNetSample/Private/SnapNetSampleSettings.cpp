#include "SnapNetSampleSettings.h"

USnapNetSampleSettings::USnapNetSampleSettings() {
    this->ProjectDisplayName = FText::FromString(TEXT("Rivals 2"));
}

FText USnapNetSampleSettings::GetScoreboardHeaderTextForColumn2() {
    return FText::GetEmpty();
}

FText USnapNetSampleSettings::GetScoreboardHeaderTextForColumn1() {
    return FText::GetEmpty();
}

FText USnapNetSampleSettings::GetProjectDisplayName() {
    return FText::GetEmpty();
}

TSoftObjectPtr<UWorld> USnapNetSampleSettings::GetGameMap() {
    return NULL;
}


