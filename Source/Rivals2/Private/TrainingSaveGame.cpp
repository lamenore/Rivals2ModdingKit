#include "TrainingSaveGame.h"

UTrainingSaveGame::UTrainingSaveGame() {
    this->LastVisitedTabIndex = 0;
    this->LastVisitedRowIndex = 0;
    this->InfiniteShield = false;
    this->CPUPercent = 0;
    this->CpuDiMode = ERivalsCpuDiMode::Random;
    this->CPUBehavior = ERivalsCpuMode::Idle;
    this->CpuGetupOption = ERivalsCpuGetupOption::Random;
    this->CpuTechOption = ERivalsCpuTechOption::Random;
    this->CpuThrowOption = ERivalsCpuThrowOption::Random;
    this->CpuPummelOption = ERivalsCpuPummelOption::Random;
    this->CpuLedgeOption = ERivalsCpuLedgeOption::Random;
    this->CPUGroundOption = ERivalsCpuCounterOption::None;
    this->CPUShieldOption = ERivalsCpuCounterOption::None;
    this->CPUAirOption = ERivalsCpuCounterOption::None;
    this->CounterDelay = 0;
    this->Floorhug = false;
    this->ShowTrainingGrid = false;
    this->StageLayout = TEXT("Hodojo");
    this->ShowHitboxes = false;
    this->ShowCollision = false;
    this->ShowDILines = false;
    this->InputHistoryVisible = false;
    this->Side = ERivalsFacingDirection::Left;
    this->Height = EEdgeguardHeight::Random;
    this->PlayerPercent = 0;
}


