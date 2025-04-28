#include "EventSubsystem.h"

UEventSubsystem::UEventSubsystem() {
}

void UEventSubsystem::UnsubscribeAllListenersOfType(UObject* Listener) {
}

void UEventSubsystem::UnsubscribeAllListenersOfEventType(FName Name) {
}

void UEventSubsystem::Unsubscribe(FName Name, FOnDynamicEvent Callback) {
}

void UEventSubsystem::Subscribe(FName Name, FOnDynamicEvent Callback) {
}

void UEventSubsystem::Broadcast(FName Name, UObject* Payload) {
}


