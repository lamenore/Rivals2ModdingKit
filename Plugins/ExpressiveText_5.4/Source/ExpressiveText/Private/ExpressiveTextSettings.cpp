#include "ExpressiveTextSettings.h"

UExpressiveTextSettings::UExpressiveTextSettings() {
    this->TagHighlightingColors.AddDefaulted(5);
    this->StopShaderPatchPrompts = false;
    this->RevertShaderPatch = false;
}

UExpressiveTextSettings* UExpressiveTextSettings::GetExpressiveTextSettings() {
    return NULL;
}


