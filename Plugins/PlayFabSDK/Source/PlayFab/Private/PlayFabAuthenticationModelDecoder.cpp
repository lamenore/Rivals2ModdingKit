#include "PlayFabAuthenticationModelDecoder.h"

UPlayFabAuthenticationModelDecoder::UPlayFabAuthenticationModelDecoder() {
}

FAuthenticationValidateEntityTokenResponse UPlayFabAuthenticationModelDecoder::decodeValidateEntityTokenResponseResponse(UPlayFabJsonObject* Response) {
    return FAuthenticationValidateEntityTokenResponse{};
}

FAuthenticationGetEntityTokenResponse UPlayFabAuthenticationModelDecoder::decodeGetEntityTokenResponseResponse(UPlayFabJsonObject* Response) {
    return FAuthenticationGetEntityTokenResponse{};
}

FAuthenticationEmptyResponse UPlayFabAuthenticationModelDecoder::decodeEmptyResponseResponse(UPlayFabJsonObject* Response) {
    return FAuthenticationEmptyResponse{};
}

FAuthenticationAuthenticateCustomIdResult UPlayFabAuthenticationModelDecoder::decodeAuthenticateCustomIdResultResponse(UPlayFabJsonObject* Response) {
    return FAuthenticationAuthenticateCustomIdResult{};
}


