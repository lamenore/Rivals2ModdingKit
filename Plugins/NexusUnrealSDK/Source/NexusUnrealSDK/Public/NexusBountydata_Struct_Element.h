#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NexusBountyBountyObjectiveProgress.h"
#include "NexusBountyCreator.h"
#include "NexusBountycompletedObjectives_Struct_Element.h"
#include "NexusBountymember_Struct.h"
#include "NexusBountydata_Struct_Element.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountydata_Struct_Element {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNexusBountyCreator Creator;
    
    NEXUSUNREALSDK_API FNexusBountydata_Struct_Element();
};

