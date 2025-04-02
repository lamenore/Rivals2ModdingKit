#pragma once
#include "CoreMinimal.h"
#include "NexusBountyobjective_Struct.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountyobjective_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Condition;
    
    NEXUSUNREALSDK_API FNexusBountyobjective_Struct();
};

