#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RivalsTargetWindowData.h"
#include "RivalsTargetData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsTargetWindowData> Windows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPoint;
    
    RIVALS2_API FRivalsTargetData();
};

