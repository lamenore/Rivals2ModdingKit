#pragma once
#include "CoreMinimal.h"
#include "PauseMenuTab.h"
#include "PauseMenuSaveStatesTab.generated.h"

class UPauseMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPauseMenuSaveStatesTab : public UPauseMenuTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_SaveStateButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_LoadStatesButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_CycleSaveStatesButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_SaveStatesBackButton;
    
    UPauseMenuSaveStatesTab();

};

