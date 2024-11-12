#include "PlayFabEventsModelDecoder.h"

UPlayFabEventsModelDecoder::UPlayFabEventsModelDecoder() {
}

FEventsWriteEventsResponse UPlayFabEventsModelDecoder::decodeWriteEventsResponseResponse(UPlayFabJsonObject* Response) {
    return FEventsWriteEventsResponse{};
}

FEventsSetTelemetryKeyActiveResponse UPlayFabEventsModelDecoder::decodeSetTelemetryKeyActiveResponseResponse(UPlayFabJsonObject* Response) {
    return FEventsSetTelemetryKeyActiveResponse{};
}

FEventsListTelemetryKeysResponse UPlayFabEventsModelDecoder::decodeListTelemetryKeysResponseResponse(UPlayFabJsonObject* Response) {
    return FEventsListTelemetryKeysResponse{};
}

FEventsGetTelemetryKeyResponse UPlayFabEventsModelDecoder::decodeGetTelemetryKeyResponseResponse(UPlayFabJsonObject* Response) {
    return FEventsGetTelemetryKeyResponse{};
}

FEventsDeleteTelemetryKeyResponse UPlayFabEventsModelDecoder::decodeDeleteTelemetryKeyResponseResponse(UPlayFabJsonObject* Response) {
    return FEventsDeleteTelemetryKeyResponse{};
}

FEventsCreateTelemetryKeyResponse UPlayFabEventsModelDecoder::decodeCreateTelemetryKeyResponseResponse(UPlayFabJsonObject* Response) {
    return FEventsCreateTelemetryKeyResponse{};
}


