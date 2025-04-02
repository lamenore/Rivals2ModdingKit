#pragma once
#include "CoreMinimal.h"
#include "NexusBountyobjective_Struct.h"
#include "NexusBountyBountyObjectiveProgress.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountyBountyObjectiveProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Completed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusBountyobjective_Struct objective;
    
    NEXUSUNREALSDK_API FNexusBountyBountyObjectiveProgress();
};

