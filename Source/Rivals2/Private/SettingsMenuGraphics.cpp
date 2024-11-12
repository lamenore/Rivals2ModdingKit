#include "SettingsMenuGraphics.h"

USettingsMenuGraphics::USettingsMenuGraphics() {
    this->BP_SettingsMenuRow_VSync = NULL;
    this->BP_SettingsMenuRow_MaxFPS = NULL;
    this->BP_SettingsMenuRow_TextureQuality = NULL;
    this->BP_SettingsMenuRow_MaterialQuality = NULL;
    this->BP_SettingsMenuRow_ShadowQuality = NULL;
    this->BP_SettingsMenuRow_ReflectionQuality = NULL;
    this->BP_SettingsMenuRow_MeshQuality = NULL;
    this->BP_SettingsMenuRow_AA = NULL;
    this->BP_SettingsMenuRow_SSAO = NULL;
    this->BP_SettingsMenuRow_Resolution = NULL;
    this->BP_SettingsMenuRow_WindowMode = NULL;
}

int32 USettingsMenuGraphics::GetMaxFPS() {
    return 0;
}


