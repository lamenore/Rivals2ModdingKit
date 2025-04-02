#pragma once
#include "CoreMinimal.h"
#include "NexusBountyBountyObjective.h"
#include "NexusBountyBountyReward.h"
#include "NexusBountycompletedObjectives_Struct_Element.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountycompletedObjectives_Struct_Element {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString objectiveGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNexusBountyBountyObjective> objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNexusBountyBountyReward> rewards;
    
    NEXUSUNREALSDK_API FNexusBountycompletedObjectives_Struct_Element();
};

