#include "RivalsArcadeModeSubsystem.h"

URivalsArcadeModeSubsystem::URivalsArcadeModeSubsystem() {
    this->ArcadeModeDifficulty = ERivalsArcadeModeDifficultySetting::Medium;
    this->IsLastArcadeANewMedal = false;
    this->HordeStockWidgetClass = NULL;
    this->ArcadeModeSkin = NULL;
    this->ArcadeModeStage = 0;
    this->ArcadeModeStocks = 0;
    this->ArcadeModeDamage = 0;
    this->TotalArcadeModeFramesElapsed = 0;
    this->ArcadeModeStartFrame = 0;
    this->RemainingTargets = 10;
    this->bIsOnResults = false;
    this->bIsGameOver = false;
}

void URivalsArcadeModeSubsystem::RemoveTarget(ARivalsTargetEntity* TargetEntity) {
}

bool URivalsArcadeModeSubsystem::IsGameOver() {
    return false;
}

bool URivalsArcadeModeSubsystem::IncreaseDifficulty() {
    return false;
}

ERivalsArcadeMedalType URivalsArcadeModeSubsystem::GetTotalMedal(int32 TotalElapsedFrames) {
    return ERivalsArcadeMedalType::None;
}

int32 URivalsArcadeModeSubsystem::GetTotalHordeOpponents() {
    return 0;
}

int32 URivalsArcadeModeSubsystem::GetTotalFramesElapsed() {
    return 0;
}

int32 URivalsArcadeModeSubsystem::GetTotalArcadeModeStages() {
    return 0;
}

int32 URivalsArcadeModeSubsystem::GetTimeFromSteamStats(FName Character, ERivalsArcadeModeDifficultySetting Difficulty) {
    return 0;
}

ERivalsArcadeMedalType URivalsArcadeModeSubsystem::GetStageMedal(int32 StageElapsedFrames, bool IsTeams) {
    return ERivalsArcadeMedalType::None;
}

TArray<ARivalsTargetEntity*> URivalsArcadeModeSubsystem::GetRemainingTargets() {
    return TArray<ARivalsTargetEntity*>();
}

ERivalsArcadeMedalType URivalsArcadeModeSubsystem::GetMedalFromSteamStats(FName Character, ERivalsArcadeModeDifficultySetting Difficulty) {
    return ERivalsArcadeMedalType::None;
}

int32 URivalsArcadeModeSubsystem::GetMaxAbyssArmor(ERivalsArcadeModeDifficultySetting Difficulty) {
    return 0;
}

int32 URivalsArcadeModeSubsystem::GetHordeStocksRemaining() {
    return 0;
}

UArcadeModeGameOverWidget* URivalsArcadeModeSubsystem::GetGameOverWidget(UObject* WorldContextObject) {
    return NULL;
}

UGameOutroWidget* URivalsArcadeModeSubsystem::GetGameOutroWidget(UObject* WorldContextObject) {
    return NULL;
}

ERivalsArcadeModeStageType URivalsArcadeModeSubsystem::GetCurrentStageType() {
    return ERivalsArcadeModeStageType::Versus;
}

URivalsArcadeModeData* URivalsArcadeModeSubsystem::GetArcadeModeData() {
    return NULL;
}

ERivalsAbyssArmorState URivalsArcadeModeSubsystem::GetAbyssArmorState(int32 PlayerIndex) {
    return ERivalsAbyssArmorState::Normal;
}

URivalsArcadeModeSubsystem* URivalsArcadeModeSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

bool URivalsArcadeModeSubsystem::DecreaseDifficulty() {
    return false;
}


