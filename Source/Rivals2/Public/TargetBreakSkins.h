#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TargetBreakSkins.generated.h"

class URivalsStageSkinData;

USTRUCT(BlueprintType)
struct FTargetBreakSkins {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<URivalsStageSkinData>> StageSkins;
    
    RIVALS2_API FTargetBreakSkins();
};

