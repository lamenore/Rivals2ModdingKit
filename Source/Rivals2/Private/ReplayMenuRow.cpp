#include "ReplayMenuRow.h"

UReplayMenuRow::UReplayMenuRow() {
    this->BP_Time_MonthDayYear = NULL;
    this->BP_Time_HourMinute = NULL;
    this->BP_Length_MinuteSecond = NULL;
    this->BP_MapName = NULL;
    this->BP_InvalidReplay_Status = NULL;
    this->BP_ScaleBox_Date = NULL;
    this->BP_HorizontalBox_Players = NULL;
    this->BP_ScaleBox_MapName = NULL;
    this->BP_ScaleBox_InvalidReplay = NULL;
    this->BP_ButtonInteract = NULL;
    this->ReplayPlayerClass = NULL;
    this->bIsValidReplay = false;
}

void UReplayMenuRow::Setup(const FString& InReplayFilename) {
}

void UReplayMenuRow::OnUnhover() {
}

void UReplayMenuRow::OnReleased() {
}

void UReplayMenuRow::OnPressed() {
}

void UReplayMenuRow::OnLostFocus(const int32 UserIndex) {
}

void UReplayMenuRow::OnHover() {
}

void UReplayMenuRow::OnFocus(const int32 UserIndex) {
}


