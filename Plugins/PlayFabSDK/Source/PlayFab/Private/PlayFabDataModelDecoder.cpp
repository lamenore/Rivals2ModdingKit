#include "PlayFabDataModelDecoder.h"

UPlayFabDataModelDecoder::UPlayFabDataModelDecoder() {
}

FDataSetObjectsResponse UPlayFabDataModelDecoder::decodeSetObjectsResponseResponse(UPlayFabJsonObject* Response) {
    return FDataSetObjectsResponse{};
}

FDataInitiateFileUploadsResponse UPlayFabDataModelDecoder::decodeInitiateFileUploadsResponseResponse(UPlayFabJsonObject* Response) {
    return FDataInitiateFileUploadsResponse{};
}

FDataGetObjectsResponse UPlayFabDataModelDecoder::decodeGetObjectsResponseResponse(UPlayFabJsonObject* Response) {
    return FDataGetObjectsResponse{};
}

FDataGetFilesResponse UPlayFabDataModelDecoder::decodeGetFilesResponseResponse(UPlayFabJsonObject* Response) {
    return FDataGetFilesResponse{};
}

FDataFinalizeFileUploadsResponse UPlayFabDataModelDecoder::decodeFinalizeFileUploadsResponseResponse(UPlayFabJsonObject* Response) {
    return FDataFinalizeFileUploadsResponse{};
}

FDataDeleteFilesResponse UPlayFabDataModelDecoder::decodeDeleteFilesResponseResponse(UPlayFabJsonObject* Response) {
    return FDataDeleteFilesResponse{};
}

FDataAbortFileUploadsResponse UPlayFabDataModelDecoder::decodeAbortFileUploadsResponseResponse(UPlayFabJsonObject* Response) {
    return FDataAbortFileUploadsResponse{};
}


