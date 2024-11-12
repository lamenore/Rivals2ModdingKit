#include "PlayFabEventsAPI.h"

UPlayFabEventsAPI::UPlayFabEventsAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

UPlayFabEventsAPI* UPlayFabEventsAPI::WriteTelemetryEventsWithTelemetryKey(FEventsWriteEventsRequest Request, const FString& telemetryKey, UPlayFabEventsAPI::FDelegateOnSuccessWriteTelemetryEvents onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEventsAPI* UPlayFabEventsAPI::WriteTelemetryEvents(FEventsWriteEventsRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessWriteTelemetryEvents onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEventsAPI* UPlayFabEventsAPI::WriteEvents(FEventsWriteEventsRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessWriteEvents onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEventsAPI* UPlayFabEventsAPI::SetTelemetryKeyActive(FEventsSetTelemetryKeyActiveRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessSetTelemetryKeyActive onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEventsAPI* UPlayFabEventsAPI::ListTelemetryKeys(FEventsListTelemetryKeysRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessListTelemetryKeys onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabEventsAPI::HelperWriteTelemetryEvents(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabEventsAPI::HelperWriteEvents(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabEventsAPI::HelperSetTelemetryKeyActive(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabEventsAPI::HelperListTelemetryKeys(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabEventsAPI::HelperGetTelemetryKey(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabEventsAPI::HelperDeleteTelemetryKey(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabEventsAPI::HelperCreateTelemetryKey(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

UPlayFabEventsAPI* UPlayFabEventsAPI::GetTelemetryKey(FEventsGetTelemetryKeyRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessGetTelemetryKey onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEventsAPI* UPlayFabEventsAPI::DeleteTelemetryKey(FEventsDeleteTelemetryKeyRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessDeleteTelemetryKey onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabEventsAPI* UPlayFabEventsAPI::CreateTelemetryKey(FEventsCreateTelemetryKeyRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessCreateTelemetryKey onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}


