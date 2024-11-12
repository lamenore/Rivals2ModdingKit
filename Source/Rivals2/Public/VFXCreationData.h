#pragma once
#include "CoreMinimal.h"
#include "VFXCreationDataBasic.h"
#include "VFXCreationData.generated.h"

USTRUCT(BlueprintType)
struct FVFXCreationData : public FVFXCreationDataBasic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CreationWindowStringTableKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreationWindowFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepeatInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreateUntilFrame;
    
    RIVALS2_API FVFXCreationData();
};

