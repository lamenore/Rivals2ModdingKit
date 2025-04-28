#pragma once
#include "CoreMinimal.h"
#include "RivalsPlayFabInventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FRivalsPlayFabInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StackId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    RIVALS2_API FRivalsPlayFabInventoryItem();
};

