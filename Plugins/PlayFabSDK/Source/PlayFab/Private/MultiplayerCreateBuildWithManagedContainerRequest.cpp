#include "MultiplayerCreateBuildWithManagedContainerRequest.h"

FMultiplayerCreateBuildWithManagedContainerRequest::FMultiplayerCreateBuildWithManagedContainerRequest() {
    this->AreAssetsReadonly = false;
    this->ContainerFlavor = EContainerFlavor::pfenum_ManagedWindowsServerCore;
    this->CustomTags = NULL;
    this->InstrumentationConfiguration = NULL;
    this->MetaData = NULL;
    this->MonitoringApplicationConfiguration = NULL;
    this->MultiplayerServerCountPerVm = 0;
    this->ServerResourceConstraints = NULL;
    this->VmSize = EAzureVmSize::pfenum_Standard_A1;
    this->VmStartupScriptConfiguration = NULL;
    this->WindowsCrashDumpConfiguration = NULL;
}

