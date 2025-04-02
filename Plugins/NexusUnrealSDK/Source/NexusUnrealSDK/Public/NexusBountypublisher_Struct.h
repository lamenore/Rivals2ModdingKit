#pragma once
#include "CoreMinimal.h"
#include "NexusBountypublisher_Struct.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountypublisher_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    NEXUSUNREALSDK_API FNexusBountypublisher_Struct();
};

