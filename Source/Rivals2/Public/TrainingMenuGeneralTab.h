#pragma once
#include "CoreMinimal.h"
#include "TrainingMenuTabInterface.h"
#include "TrainingMenuGeneralTab.generated.h"

class UTrainingMenuRow;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTrainingMenuGeneralTab : public UTrainingMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Resume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_GreenScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_DebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_InputDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_ActionDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_HudVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_FrameAdvance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_LoadState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_SaveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_FreeCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Restart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Quit;
    
    UTrainingMenuGeneralTab();

};

