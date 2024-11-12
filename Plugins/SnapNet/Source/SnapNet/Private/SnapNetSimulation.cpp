#include "SnapNetSimulation.h"
#include "Templates/SubclassOf.h"

USnapNetSimulation::USnapNetSimulation() {
    this->EntitySimulatedStatusUpToDate = false;
    this->FrameCounterRenderer = 0;
    this->FrameCounterSimulation = 0;
    this->PendingNetGame = NULL;
    this->bPlayingInstantReplay = false;
    this->World = NULL;
}

bool USnapNetSimulation::WasInputActionReleased(int32 PlayerIndex, FName ActionName) const {
    return false;
}

bool USnapNetSimulation::WasInputActionPressed(int32 PlayerIndex, FName ActionName) const {
    return false;
}

USnapNetEvent* USnapNetSimulation::SpawnEvent(TSubclassOf<USnapNetEvent> eventClass, const USnapNetEntityComponent* entityComponent) {
    return NULL;
}

AActor* USnapNetSimulation::SpawnEntity(TSubclassOf<AActor> entityClass, int32 ownerPlayerIndex) {
    return NULL;
}

void USnapNetSimulation::RequestEntityRendererUpdate(int32 EntityIndex) {
}

bool USnapNetSimulation::IsServer() const {
    return false;
}

bool USnapNetSimulation::IsInputActionDown(int32 PlayerIndex, FName ActionName) const {
    return false;
}

bool USnapNetSimulation::IsClient() const {
    return false;
}

USnapNetSubsystem* USnapNetSimulation::GetSubsystem() const {
    return NULL;
}

int32 USnapNetSimulation::GetStringCount(const FName& StringPoolName) const {
    return 0;
}

FString USnapNetSimulation::GetString(const FName& StringPoolName, int32 stringIndex) const {
    return TEXT("");
}

USnapNetServer* USnapNetSimulation::GetServer() const {
    return NULL;
}

float USnapNetSimulation::GetPreviousInputAxis(int32 PlayerIndex, FName AxisName) const {
    return 0.0f;
}

USnapNetCustomInput* USnapNetSimulation::GetPreviousCustomInput(int32 PlayerIndex) const {
    return NULL;
}

float USnapNetSimulation::GetInputAxis(int32 PlayerIndex, FName AxisName) const {
    return 0.0f;
}

int32 USnapNetSimulation::GetInputAge(int32 PlayerIndex) const {
    return 0;
}

ESnapNetSimulationFrameType USnapNetSimulation::GetFrameType() const {
    return ESnapNetSimulationFrameType::None;
}

USnapNetEntityRendererComponent* USnapNetSimulation::GetEntityRenderer(int32 EntityIndex) const {
    return NULL;
}

USnapNetEntityComponent* USnapNetSimulation::GetEntityComponent(int32 EntityIndex) const {
    return NULL;
}

AActor* USnapNetSimulation::GetEntity(int32 EntityIndex) const {
    return NULL;
}

USnapNetCustomInput* USnapNetSimulation::GetCustomInput(int32 PlayerIndex) const {
    return NULL;
}

FRotator USnapNetSimulation::GetControlRotation(int32 PlayerIndex) const {
    return FRotator{};
}

USnapNetClient* USnapNetSimulation::GetClient() const {
    return NULL;
}

USnapNetSimulation* USnapNetSimulation::Get(const UObject* WorldContextObject) {
    return NULL;
}

int32 USnapNetSimulation::FindString(const FName& StringPoolName, const FString& Value) const {
    return 0;
}

void USnapNetSimulation::DestroyEntity(int32 EntityIndex) {
}


