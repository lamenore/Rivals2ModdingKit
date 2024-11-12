#pragma once
#include "CoreMinimal.h"
#include "ControllerButtonIconData.h"
#include "ControllerButtonIconDataList.generated.h"

USTRUCT(BlueprintType)
struct FControllerButtonIconDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerButtonIconData> ButtonIcons;
    
    RIVALS2_API FControllerButtonIconDataList();
};

