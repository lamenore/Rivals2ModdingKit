#include "PlayFabExperimentationModelDecoder.h"

UPlayFabExperimentationModelDecoder::UPlayFabExperimentationModelDecoder() {
}

FExperimentationGetTreatmentAssignmentResult UPlayFabExperimentationModelDecoder::decodeGetTreatmentAssignmentResultResponse(UPlayFabJsonObject* Response) {
    return FExperimentationGetTreatmentAssignmentResult{};
}

FExperimentationGetLatestScorecardResult UPlayFabExperimentationModelDecoder::decodeGetLatestScorecardResultResponse(UPlayFabJsonObject* Response) {
    return FExperimentationGetLatestScorecardResult{};
}

FExperimentationGetExperimentsResult UPlayFabExperimentationModelDecoder::decodeGetExperimentsResultResponse(UPlayFabJsonObject* Response) {
    return FExperimentationGetExperimentsResult{};
}

FExperimentationGetExclusionGroupTrafficResult UPlayFabExperimentationModelDecoder::decodeGetExclusionGroupTrafficResultResponse(UPlayFabJsonObject* Response) {
    return FExperimentationGetExclusionGroupTrafficResult{};
}

FExperimentationGetExclusionGroupsResult UPlayFabExperimentationModelDecoder::decodeGetExclusionGroupsResultResponse(UPlayFabJsonObject* Response) {
    return FExperimentationGetExclusionGroupsResult{};
}

FExperimentationEmptyResponse UPlayFabExperimentationModelDecoder::decodeEmptyResponseResponse(UPlayFabJsonObject* Response) {
    return FExperimentationEmptyResponse{};
}

FExperimentationCreateExperimentResult UPlayFabExperimentationModelDecoder::decodeCreateExperimentResultResponse(UPlayFabJsonObject* Response) {
    return FExperimentationCreateExperimentResult{};
}

FExperimentationCreateExclusionGroupResult UPlayFabExperimentationModelDecoder::decodeCreateExclusionGroupResultResponse(UPlayFabJsonObject* Response) {
    return FExperimentationCreateExclusionGroupResult{};
}


