#include "RivalsSettings.h"
#include "RivalsCommandManager.h"

URivalsSettings::URivalsSettings() {
    this->PlayerColors.AddDefaulted(4);
    this->PlayerColorsDark.AddDefaulted(4);
    this->PlayerColorsLight.AddDefaulted(4);
    this->TeamColors.AddDefaulted(3);
    this->TeamColorsDark.AddDefaulted(3);
    this->TeamColorsLight.AddDefaulted(3);
    this->CpuColors.AddDefaulted(4);
    this->CpuColorsDark.AddDefaulted(4);
    this->CpuColorsLight.AddDefaulted(4);
    this->OnlineColors.AddDefaulted(4);
    this->OnlineColorsDark.AddDefaulted(4);
    this->OnlineColorsLight.AddDefaulted(4);
    this->GamecubeControllerDeadzone = 0.05f;
    this->GamecubeControllerSensitivity = 1.30f;
    this->PlayFabItemTags.AddDefaulted(10);
    this->DisableFidgetsInEditor = false;
    this->SpawnDebugCharactersInGameplayMaps = true;
    this->DebugView = true;
    this->RenderCameraDebug = false;
    this->UsingTrailerCamera = false;
    this->RivalsCheatManagerClass = URivalsCommandManager::StaticClass();
}


