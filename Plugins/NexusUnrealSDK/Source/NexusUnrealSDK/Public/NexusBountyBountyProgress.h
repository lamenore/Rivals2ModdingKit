#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NexusBountyBountyObjectiveProgress.h"
#include "NexusBountycompletedObjectives_Struct_Element.h"
#include "NexusBountymember_Struct.h"
#include "NexusBountyBountyProgress.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountyBountyProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Completed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double completionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime lastProgressCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString currentObjectiveGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNexusBountyBountyObjectiveProgress> currentObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNexusBountycompletedObjectives_Struct_Element> completedObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusBountymember_Struct Member;
    
    NEXUSUNREALSDK_API FNexusBountyBountyProgress();
};

