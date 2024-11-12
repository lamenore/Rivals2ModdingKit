#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CloudScriptEmptyResult.h"
#include "CloudScriptExecuteCloudScriptResult.h"
#include "CloudScriptExecuteFunctionResult.h"
#include "CloudScriptGetFunctionResult.h"
#include "CloudScriptListEventHubFunctionsResult.h"
#include "CloudScriptListFunctionsResult.h"
#include "CloudScriptListHttpFunctionsResult.h"
#include "CloudScriptListQueuedFunctionsResult.h"
#include "PlayFabCloudScriptModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabCloudScriptModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabCloudScriptModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FCloudScriptListQueuedFunctionsResult decodeListQueuedFunctionsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FCloudScriptListHttpFunctionsResult decodeListHttpFunctionsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FCloudScriptListFunctionsResult decodeListFunctionsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FCloudScriptListEventHubFunctionsResult decodeListEventHubFunctionsResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FCloudScriptGetFunctionResult decodeGetFunctionResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FCloudScriptExecuteFunctionResult decodeExecuteFunctionResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FCloudScriptExecuteCloudScriptResult decodeExecuteCloudScriptResultResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FCloudScriptEmptyResult decodeEmptyResultResponse(UPlayFabJsonObject* Response);
    
};

