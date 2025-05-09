#pragma once
#include "CoreMinimal.h"
#include "PauseMenuTab.h"
#include "PauseMenuDebugOptionsTab.generated.h"

class UPauseMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPauseMenuDebugOptionsTab : public UPauseMenuTab {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_DebugInfoButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_NetStatsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_BackButton;
    
public:
    UPauseMenuDebugOptionsTab();

};

