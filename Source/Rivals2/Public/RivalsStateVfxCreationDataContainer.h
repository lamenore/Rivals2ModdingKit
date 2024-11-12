#pragma once
#include "CoreMinimal.h"
#include "RivalsStateVfxCreationData.h"
#include "RivalsStateVfxCreationDataContainer.generated.h"

USTRUCT(BlueprintType)
struct FRivalsStateVfxCreationDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsStateVfxCreationData> StateVfxCreationData;
    
    RIVALS2_API FRivalsStateVfxCreationDataContainer();
};

