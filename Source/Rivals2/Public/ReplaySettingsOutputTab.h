#pragma once
#include "CoreMinimal.h"
#include "ReplaySettingsTabInterface.h"
#include "ReplaySettingsOutputTab.generated.h"

class UReplaySettingsRow;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UReplaySettingsOutputTab : public UReplaySettingsTabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplaySettingsRow* BP_ResolutionRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplaySettingsRow* BP_FPSRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplaySettingsRow* BP_CamType;
    
public:
    UReplaySettingsOutputTab();

};

