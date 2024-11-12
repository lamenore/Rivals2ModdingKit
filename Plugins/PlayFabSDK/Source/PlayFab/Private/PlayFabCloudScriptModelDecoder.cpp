#include "PlayFabCloudScriptModelDecoder.h"

UPlayFabCloudScriptModelDecoder::UPlayFabCloudScriptModelDecoder() {
}

FCloudScriptListQueuedFunctionsResult UPlayFabCloudScriptModelDecoder::decodeListQueuedFunctionsResultResponse(UPlayFabJsonObject* Response) {
    return FCloudScriptListQueuedFunctionsResult{};
}

FCloudScriptListHttpFunctionsResult UPlayFabCloudScriptModelDecoder::decodeListHttpFunctionsResultResponse(UPlayFabJsonObject* Response) {
    return FCloudScriptListHttpFunctionsResult{};
}

FCloudScriptListFunctionsResult UPlayFabCloudScriptModelDecoder::decodeListFunctionsResultResponse(UPlayFabJsonObject* Response) {
    return FCloudScriptListFunctionsResult{};
}

FCloudScriptListEventHubFunctionsResult UPlayFabCloudScriptModelDecoder::decodeListEventHubFunctionsResultResponse(UPlayFabJsonObject* Response) {
    return FCloudScriptListEventHubFunctionsResult{};
}

FCloudScriptGetFunctionResult UPlayFabCloudScriptModelDecoder::decodeGetFunctionResultResponse(UPlayFabJsonObject* Response) {
    return FCloudScriptGetFunctionResult{};
}

FCloudScriptExecuteFunctionResult UPlayFabCloudScriptModelDecoder::decodeExecuteFunctionResultResponse(UPlayFabJsonObject* Response) {
    return FCloudScriptExecuteFunctionResult{};
}

FCloudScriptExecuteCloudScriptResult UPlayFabCloudScriptModelDecoder::decodeExecuteCloudScriptResultResponse(UPlayFabJsonObject* Response) {
    return FCloudScriptExecuteCloudScriptResult{};
}

FCloudScriptEmptyResult UPlayFabCloudScriptModelDecoder::decodeEmptyResultResponse(UPlayFabJsonObject* Response) {
    return FCloudScriptEmptyResult{};
}


