#pragma once
#include "CoreMinimal.h"
#include "StageSelectPageData.generated.h"

class URivalsStageData;

USTRUCT(BlueprintType)
struct FStageSelectPageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URivalsStageData*> StagesOnPage;
    
    RIVALS2_API FStageSelectPageData();
};

