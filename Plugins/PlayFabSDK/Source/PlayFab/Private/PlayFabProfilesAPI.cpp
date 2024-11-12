#include "PlayFabProfilesAPI.h"

UPlayFabProfilesAPI::UPlayFabProfilesAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

UPlayFabProfilesAPI* UPlayFabProfilesAPI::SetProfilePolicy(FProfilesSetEntityProfilePolicyRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessSetProfilePolicy onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabProfilesAPI* UPlayFabProfilesAPI::SetProfileLanguage(FProfilesSetProfileLanguageRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessSetProfileLanguage onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabProfilesAPI* UPlayFabProfilesAPI::SetGlobalPolicy(FProfilesSetGlobalPolicyRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessSetGlobalPolicy onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabProfilesAPI::HelperSetProfilePolicy(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabProfilesAPI::HelperSetProfileLanguage(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabProfilesAPI::HelperSetGlobalPolicy(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabProfilesAPI::HelperGetTitlePlayersFromXboxLiveIDs(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabProfilesAPI::HelperGetTitlePlayersFromMasterPlayerAccountIds(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabProfilesAPI::HelperGetProfiles(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabProfilesAPI::HelperGetProfile(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabProfilesAPI::HelperGetGlobalPolicy(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

UPlayFabProfilesAPI* UPlayFabProfilesAPI::GetTitlePlayersFromXboxLiveIDs(FProfilesGetTitlePlayersFromXboxLiveIDsRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessGetTitlePlayersFromXboxLiveIDs onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabProfilesAPI* UPlayFabProfilesAPI::GetTitlePlayersFromMasterPlayerAccountIds(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabProfilesAPI* UPlayFabProfilesAPI::GetProfiles(FProfilesGetEntityProfilesRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessGetProfiles onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabProfilesAPI* UPlayFabProfilesAPI::GetProfile(FProfilesGetEntityProfileRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessGetProfile onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabProfilesAPI* UPlayFabProfilesAPI::GetGlobalPolicy(FProfilesGetGlobalPolicyRequest Request, UPlayFabProfilesAPI::FDelegateOnSuccessGetGlobalPolicy onSuccess, UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}


