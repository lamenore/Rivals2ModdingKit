#include "MultiplayerCreateBuildWithManagedContainerResponse.h"

FMultiplayerCreateBuildWithManagedContainerResponse::FMultiplayerCreateBuildWithManagedContainerResponse() {
    this->AreAssetsReadonly = false;
    this->ContainerFlavor = EContainerFlavor::pfenum_ManagedWindowsServerCore;
    this->InstrumentationConfiguration = NULL;
    this->MetaData = NULL;
    this->MonitoringApplicationConfiguration = NULL;
    this->MultiplayerServerCountPerVm = 0;
    this->ServerResourceConstraints = NULL;
    this->UseStreamingForAssetDownloads = false;
    this->VmSize = EAzureVmSize::pfenum_Standard_A1;
    this->VmStartupScriptConfiguration = NULL;
}

