#pragma once
#include "CoreMinimal.h"
#include "PauseMenuTab.h"
#include "PauseMenuHomeTab.generated.h"

class UPauseMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPauseMenuHomeTab : public UPauseMenuTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_ResumeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_SaveStatesMenuButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_FrameAdvanceButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_TrainingMenuButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_HUDOptionsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_DebugModeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_GreenScreenButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_FreeCameraButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_RestartButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* BP_QuitButton;
    
    UPauseMenuHomeTab();

};

