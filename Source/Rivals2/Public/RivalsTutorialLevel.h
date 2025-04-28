#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RivalsTutorialLevel.generated.h"

class URivalsStageData;
class UWorld;

USTRUCT(BlueprintType)
struct FRivalsTutorialLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsStageData> StageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Level;
    
    RIVALS2_API FRivalsTutorialLevel();
};

