#pragma once
#include "CoreMinimal.h"
#include "ERivalsTutorialType.h"
#include "RivalsTutorialLevel.h"
#include "RivalsTutorialData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsTutorialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsTutorialType, FRivalsTutorialLevel> Levels;
    
    RIVALS2_API FRivalsTutorialData();
};

