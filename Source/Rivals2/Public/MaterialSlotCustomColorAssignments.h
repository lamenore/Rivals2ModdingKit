#pragma once
#include "CoreMinimal.h"
#include "MaterialSlotCustomColorAssignments.generated.h"

USTRUCT(BlueprintType)
struct FMaterialSlotCustomColorAssignments {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> MaterialParameterColorSlotNames;
    
    RIVALS2_API FMaterialSlotCustomColorAssignments();
};

