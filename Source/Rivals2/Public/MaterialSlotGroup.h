#pragma once
#include "CoreMinimal.h"
#include "MaterialSlotGroup.generated.h"

USTRUCT(BlueprintType)
struct FMaterialSlotGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MaterialSlotNames;
    
    RIVALS2_API FMaterialSlotGroup();
};

