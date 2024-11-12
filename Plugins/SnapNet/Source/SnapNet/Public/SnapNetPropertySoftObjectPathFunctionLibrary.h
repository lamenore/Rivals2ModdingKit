#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SnapNetPropertySoftObjectPath.h"
#include "SnapNetPropertySoftObjectPathFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertySoftObjectPathFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertySoftObjectPathFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValue(UPARAM(Ref) FSnapNetPropertySoftObjectPath& SnapNetPropertySoftObjectPath, const FSoftObjectPath& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* ResolveObject(const FSnapNetPropertySoftObjectPath& SnapNetPropertySoftObjectPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoftObjectPath Conv_SnapNetPropertySoftObjectPathToSoftObjectPath(const FSnapNetPropertySoftObjectPath& SnapNetPropertySoftObjectPath);
    
};

