#pragma once
#include "CoreMinimal.h"
#include "PauseMenuTab.h"
#include "PauseMenuHUDOptionsTab.generated.h"

class UPauseMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPauseMenuHUDOptionsTab : public UPauseMenuTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_HUDTypeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_InputDisplayButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_HUDBackButton;
    
    UPauseMenuHUDOptionsTab();

};

