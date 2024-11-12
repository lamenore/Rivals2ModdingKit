#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataAbortFileUploadsResponse.h"
#include "DataDeleteFilesResponse.h"
#include "DataFinalizeFileUploadsResponse.h"
#include "DataGetFilesResponse.h"
#include "DataGetObjectsResponse.h"
#include "DataInitiateFileUploadsResponse.h"
#include "DataSetObjectsResponse.h"
#include "PlayFabDataModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabDataModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabDataModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FDataSetObjectsResponse decodeSetObjectsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FDataInitiateFileUploadsResponse decodeInitiateFileUploadsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FDataGetObjectsResponse decodeGetObjectsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FDataGetFilesResponse decodeGetFilesResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FDataFinalizeFileUploadsResponse decodeFinalizeFileUploadsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FDataDeleteFilesResponse decodeDeleteFilesResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FDataAbortFileUploadsResponse decodeAbortFileUploadsResponseResponse(UPlayFabJsonObject* Response);
    
};

