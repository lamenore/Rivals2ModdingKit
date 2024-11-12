#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExperimentationCreateExclusionGroupResult.h"
#include "ExperimentationCreateExperimentResult.h"
#include "ExperimentationEmptyResponse.h"
#include "ExperimentationGetExclusionGroupTrafficResult.h"
#include "ExperimentationGetExclusionGroupsResult.h"
#include "ExperimentationGetExperimentsResult.h"
#include "ExperimentationGetLatestScorecardResult.h"
#include "ExperimentationGetTreatmentAssignmentResult.h"
#include "PlayFabExperimentationModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabExperimentationModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabExperimentationModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FExperimentationGetTreatmentAssignmentResult decodeGetTreatmentAssignmentResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationGetLatestScorecardResult decodeGetLatestScorecardResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationGetExperimentsResult decodeGetExperimentsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationGetExclusionGroupTrafficResult decodeGetExclusionGroupTrafficResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationGetExclusionGroupsResult decodeGetExclusionGroupsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationCreateExperimentResult decodeCreateExperimentResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FExperimentationCreateExclusionGroupResult decodeCreateExclusionGroupResultResponse(UPlayFabJsonObject* Response);
    
};

