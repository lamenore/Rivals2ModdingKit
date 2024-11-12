#include "RivalsLoadingSubsystem.h"

URivalsLoadingSubsystem::URivalsLoadingSubsystem() {
    this->LoadedVictoryDataForSounds = NULL;
}

bool URivalsLoadingSubsystem::IsLoadingPersistentAssets() const {
    return false;
}

bool URivalsLoadingSubsystem::IsLoadingGameplayAssets() const {
    return false;
}

bool URivalsLoadingSubsystem::IsLoading() const {
    return false;
}

URivalsLoadingSubsystem* URivalsLoadingSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}


