#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SnapNetPropertyPrimaryAsset.h"
#include "SnapNetPropertyPrimaryAssetFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertyPrimaryAssetFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertyPrimaryAssetFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetPrimaryAssetId(UPARAM(Ref) FSnapNetPropertyPrimaryAsset& SnapNetPropertyPrimaryAsset, const FPrimaryAssetId& PrimaryAssetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPrimaryAssetId GetValue_GetPrimaryAssetId(const FSnapNetPropertyPrimaryAsset& SnapNetPropertyPrimaryAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetObject(const FSnapNetPropertyPrimaryAsset& SnapNetPropertyPrimaryAsset);
    
};

