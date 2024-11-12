#include "RivalsMeshComponent.h"

URivalsMeshComponent::URivalsMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseThisMeshActor = NULL;
    this->ParentMesh = NULL;
    this->bSyncToParentMesh = true;
    this->bHasSolid = true;
}

UDynamicMesh* URivalsMeshComponent::GetMeshToSyncTo() {
    return NULL;
}


