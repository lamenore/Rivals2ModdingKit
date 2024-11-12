#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RivalsArcadeModeStageData.h"
#include "RivalsArcadeModeData.generated.h"

class UFMODEvent;

UCLASS(Blueprintable)
class RIVALS2_API URivalsArcadeModeData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsArcadeModeStageData> ArcadeModeStages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFMODEvent> VictoryJingle;
    
    URivalsArcadeModeData();

};

