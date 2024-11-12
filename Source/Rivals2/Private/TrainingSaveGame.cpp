#include "TrainingSaveGame.h"

UTrainingSaveGame::UTrainingSaveGame() {
    this->InfiniteShield = false;
    this->CPUPercent = 0;
    this->CpuDiMode = ERivalsCpuDiMode::Random;
    this->CPUBehavior = ERivalsCpuMode::Idle;
    this->CpuGetupOption = ERivalsCpuGetupOption::Random;
    this->CpuTechOption = ERivalsCpuTechOption::Random;
    this->CPUGroundOption = ERivalsCpuCounterOption::None;
    this->CPUShieldOption = ERivalsCpuCounterOption::None;
    this->CPUAirOption = ERivalsCpuCounterOption::None;
    this->ShowTrainingGrid = false;
    this->StageLayout = TEXT("Hodojo");
    this->ShowHitboxes = false;
    this->ShowCollision = false;
    this->ShowDILines = false;
}


