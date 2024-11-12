#include "PlayFabAuthenticationAPI.h"

UPlayFabAuthenticationAPI::UPlayFabAuthenticationAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

UPlayFabAuthenticationAPI* UPlayFabAuthenticationAPI::ValidateEntityToken(FAuthenticationValidateEntityTokenRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessValidateEntityToken onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabAuthenticationAPI::HelperValidateEntityToken(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabAuthenticationAPI::HelperGetEntityToken(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabAuthenticationAPI::HelperDelete(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabAuthenticationAPI::HelperAuthenticateGameServerWithCustomId(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

UPlayFabAuthenticationAPI* UPlayFabAuthenticationAPI::GetEntityToken(FAuthenticationGetEntityTokenRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessGetEntityToken onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabAuthenticationAPI* UPlayFabAuthenticationAPI::Delete(FAuthenticationDeleteRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessDelete onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabAuthenticationAPI* UPlayFabAuthenticationAPI::AuthenticateGameServerWithCustomId(FAuthenticationAuthenticateCustomIdRequest Request, UPlayFabAuthenticationAPI::FDelegateOnSuccessAuthenticateGameServerWithCustomId onSuccess, UPlayFabAuthenticationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}


