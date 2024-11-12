#include "MultiplayerCreateBuildWithCustomContainerResponse.h"

FMultiplayerCreateBuildWithCustomContainerResponse::FMultiplayerCreateBuildWithCustomContainerResponse() {
    this->AreAssetsReadonly = false;
    this->ContainerFlavor = EContainerFlavor::pfenum_ManagedWindowsServerCore;
    this->CustomGameContainerImage = NULL;
    this->LinuxInstrumentationConfiguration = NULL;
    this->MetaData = NULL;
    this->MonitoringApplicationConfiguration = NULL;
    this->MultiplayerServerCountPerVm = 0;
    this->ServerResourceConstraints = NULL;
    this->UseStreamingForAssetDownloads = false;
    this->VmSize = EAzureVmSize::pfenum_Standard_A1;
    this->VmStartupScriptConfiguration = NULL;
}

