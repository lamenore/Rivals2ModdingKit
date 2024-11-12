#include "SnapNetSampleGameInstance.h"

USnapNetSampleGameInstance::USnapNetSampleGameInstance() {
    this->bStartListenServerOnMapLoadComplete = false;
}

void USnapNetSampleGameInstance::LeaveMatch() {
}

void USnapNetSampleGameInstance::LaunchListenServer(TSoftObjectPtr<UWorld> Map) {
}

bool USnapNetSampleGameInstance::IsUsingSteam() const {
    return false;
}

bool USnapNetSampleGameInstance::IsUsingSessionBrowser() const {
    return false;
}


