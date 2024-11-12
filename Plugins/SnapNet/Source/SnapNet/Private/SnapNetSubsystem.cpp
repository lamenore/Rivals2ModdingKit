#include "SnapNetSubsystem.h"
#include "Templates/SubclassOf.h"

USnapNetSubsystem::USnapNetSubsystem() {
    this->client = NULL;
    this->LoadingReferenceCount = 0;
    this->PlayerJoinRequestClass = NULL;
    this->SeamlessTravelInProgress = false;
    this->Server = NULL;
    this->SingleFrameAdvanceActive = false;
    this->SingleFrameAdvanceEnabled = false;
    this->SingleFrameAdvanceRequested = false;
}

void USnapNetSubsystem::UnregisterAllStringPools() {
}

void USnapNetSubsystem::UnregisterAllReliableMessageClasses() {
}

void USnapNetSubsystem::UnregisterAllMaps() {
}

void USnapNetSubsystem::UnregisterAllEventClasses() {
}

void USnapNetSubsystem::UnregisterAllEntityClasses() {
}

void USnapNetSubsystem::SetSingleFrameAdvanceEnabled(bool Enabled) {
}

void USnapNetSubsystem::SetPlayerJoinRequestClass(TSubclassOf<USnapNetPlayerJoinRequest> NewPlayerJoinRequestClass) {
}

void USnapNetSubsystem::RequestFrameAdvance() {
}

void USnapNetSubsystem::RegisterStringPools(const TArray<FSnapNetStringPool>& StringPools) {
}

void USnapNetSubsystem::RegisterStringPool(const FSnapNetStringPool& stringPool) {
}

void USnapNetSubsystem::RegisterReliableMessageClasses(const TArray<TSubclassOf<USnapNetReliableMessage>>& ReliableMessageClasses) {
}

void USnapNetSubsystem::RegisterReliableMessageClass(TSubclassOf<USnapNetReliableMessage> reliableMessageClass) {
}

void USnapNetSubsystem::RegisterMaps(TArray<TSoftObjectPtr<UWorld>> Maps) {
}

void USnapNetSubsystem::RegisterMap(TSoftObjectPtr<UWorld> Map) {
}

void USnapNetSubsystem::RegisterEventClasses(const TArray<TSubclassOf<USnapNetEvent>>& EventClasses) {
}

void USnapNetSubsystem::RegisterEventClass(TSubclassOf<USnapNetEvent> eventClass) {
}

void USnapNetSubsystem::RegisterEntityClasses(const TArray<TSubclassOf<AActor>>& EntityClasses) {
}

void USnapNetSubsystem::RegisterEntityClass(TSubclassOf<AActor> entityClass) {
}

void USnapNetSubsystem::RegisterClassesFromSettings() {
}

bool USnapNetSubsystem::IsSnapNetServer(const UObject* WorldContextObject) {
    return false;
}

bool USnapNetSubsystem::IsSnapNetClient(const UObject* WorldContextObject) {
    return false;
}

bool USnapNetSubsystem::IsSingleFrameAdvanceEnabled() const {
    return false;
}

USnapNetServer* USnapNetSubsystem::GetServer() const {
    return NULL;
}

TSubclassOf<USnapNetPlayerJoinRequest> USnapNetSubsystem::GetPlayerJoinRequestClass() const {
    return NULL;
}

USnapNetEntityRendererComponent* USnapNetSubsystem::GetEntityRendererComponent(int32 EntityIndex) const {
    return NULL;
}

AActor* USnapNetSubsystem::GetEntityRenderer(int32 EntityIndex) const {
    return NULL;
}

USnapNetClient* USnapNetSubsystem::GetClient() const {
    return NULL;
}

USnapNetSubsystem* USnapNetSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}


