#pragma once
#include "CoreMinimal.h"
#include "NexusBountydependants_Struct_Element.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountydependants_Struct_Element {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    NEXUSUNREALSDK_API FNexusBountydependants_Struct_Element();
};

