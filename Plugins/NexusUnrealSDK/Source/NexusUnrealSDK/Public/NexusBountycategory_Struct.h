#pragma once
#include "CoreMinimal.h"
#include "NexusBountycategory_Struct.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountycategory_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString slug;
    
    NEXUSUNREALSDK_API FNexusBountycategory_Struct();
};

