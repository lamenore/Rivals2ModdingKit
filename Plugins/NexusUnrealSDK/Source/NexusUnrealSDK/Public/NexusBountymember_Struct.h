#pragma once
#include "CoreMinimal.h"
#include "NexusBountyCode.h"
#include "NexusBountymember_Struct.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountymember_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNexusBountyCode> codes;
    
    NEXUSUNREALSDK_API FNexusBountymember_Struct();
};

