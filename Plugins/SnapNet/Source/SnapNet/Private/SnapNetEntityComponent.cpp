#include "SnapNetEntityComponent.h"

USnapNetEntityComponent::USnapNetEntityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DestroyedBySnapNet = false;
    this->EntityIndex = -1;
    this->ActorTickWasEnabled = false;
    this->Awake = true;
    this->LastPredictionErrorTime = 0;
    this->PredictionAtSpawn = ESnapNetEntityPredictionAtSpawn::Default;
    this->PredictionMode = ESnapNetEntityPredictionMode::All;
    this->requiresOwnerInput = false;
    this->RetainOnMapChange = false;
    this->SavedPredictionTeleportFlag = false;
    this->SavedPredictionValid = false;
    this->Simulated = true;
    this->TransformSyncMode = ESnapNetTransformSyncMode::PositionAndRotation;
    this->SmallPositionDeltaThreshold = 0.00f;
}

void USnapNetEntityComponent::SetRequiresOwnerInput(bool NewRequiresOwnerInput) {
}

void USnapNetEntityComponent::SetPredictedForPlayer(int32 PlayerIndex, bool predicted) {
}

void USnapNetEntityComponent::SetPredictedForAllPlayers(bool predicted) {
}

bool USnapNetEntityComponent::SetOwnerPlayerIndex(int32 PlayerIndex) {
    return false;
}

void USnapNetEntityComponent::SetInstantReplayBehavior(ESnapNetEntityInstantReplayBehavior Behavior) {
}

void USnapNetEntityComponent::SendToPlayer(int32 PlayerIndex, bool send) {
}

void USnapNetEntityComponent::SendToNoPlayers() {
}

void USnapNetEntityComponent::SendToAllPlayers() {
}

void USnapNetEntityComponent::MarkTeleported() {
}

bool USnapNetEntityComponent::IsSimulated() const {
    return false;
}

bool USnapNetEntityComponent::IsOwnerPlayerLocal() const {
    return false;
}

bool USnapNetEntityComponent::HasSimulatedState() const {
    return false;
}

int32 USnapNetEntityComponent::GetTimeMilliseconds() const {
    return 0;
}

int32 USnapNetEntityComponent::GetOwnerPlayerIndex() const {
    return 0;
}

TSoftClassPtr<AActor> USnapNetEntityComponent::GetEntityRendererClass() const {
    return NULL;
}

int32 USnapNetEntityComponent::GeneratePerFrameSeed(int32 fixedSeed) const {
    return 0;
}


