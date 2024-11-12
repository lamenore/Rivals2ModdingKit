#include "RivalsUIManagerSubsystem.h"

URivalsUIManagerSubsystem::URivalsUIManagerSubsystem() {
    this->CurrentScreen = NULL;
    this->StartupMovieLoaded = false;
    this->AssetMaps = NULL;
    this->IsInTextEntry = false;
    this->FocusLockedToViewport = false;
    this->PreviousFocusWidget = NULL;
}

ERivalsMenuState URivalsUIManagerSubsystem::GetCurrentMenuState() const {
    return ERivalsMenuState::None;
}


