#pragma once
#include "CoreMinimal.h"
#include "ERivalsArcadeModeStageType.h"
#include "RivalsArcadeModeStageData.generated.h"

class URivalsCharacterSkinDefinition;
class URivalsStageSkinData;

USTRUCT(BlueprintType)
struct FRivalsArcadeModeStageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsArcadeModeStageType StageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<URivalsCharacterSkinDefinition>> Opponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URivalsCharacterSkinDefinition> Teammate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URivalsStageSkinData> StageSkin;
    
    RIVALS2_API FRivalsArcadeModeStageData();
};

