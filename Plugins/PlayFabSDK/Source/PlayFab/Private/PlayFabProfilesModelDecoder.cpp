#include "PlayFabProfilesModelDecoder.h"

UPlayFabProfilesModelDecoder::UPlayFabProfilesModelDecoder() {
}

FProfilesSetProfileLanguageResponse UPlayFabProfilesModelDecoder::decodeSetProfileLanguageResponseResponse(UPlayFabJsonObject* Response) {
    return FProfilesSetProfileLanguageResponse{};
}

FProfilesSetGlobalPolicyResponse UPlayFabProfilesModelDecoder::decodeSetGlobalPolicyResponseResponse(UPlayFabJsonObject* Response) {
    return FProfilesSetGlobalPolicyResponse{};
}

FProfilesSetEntityProfilePolicyResponse UPlayFabProfilesModelDecoder::decodeSetEntityProfilePolicyResponseResponse(UPlayFabJsonObject* Response) {
    return FProfilesSetEntityProfilePolicyResponse{};
}

FProfilesGetTitlePlayersFromProviderIDsResponse UPlayFabProfilesModelDecoder::decodeGetTitlePlayersFromProviderIDsResponseResponse(UPlayFabJsonObject* Response) {
    return FProfilesGetTitlePlayersFromProviderIDsResponse{};
}

FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse UPlayFabProfilesModelDecoder::decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse(UPlayFabJsonObject* Response) {
    return FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse{};
}

FProfilesGetGlobalPolicyResponse UPlayFabProfilesModelDecoder::decodeGetGlobalPolicyResponseResponse(UPlayFabJsonObject* Response) {
    return FProfilesGetGlobalPolicyResponse{};
}

FProfilesGetEntityProfilesResponse UPlayFabProfilesModelDecoder::decodeGetEntityProfilesResponseResponse(UPlayFabJsonObject* Response) {
    return FProfilesGetEntityProfilesResponse{};
}

FProfilesGetEntityProfileResponse UPlayFabProfilesModelDecoder::decodeGetEntityProfileResponseResponse(UPlayFabJsonObject* Response) {
    return FProfilesGetEntityProfileResponse{};
}


