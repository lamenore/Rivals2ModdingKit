#pragma once
#include "CoreMinimal.h"
#include "TrainingMenuTabInterface.h"
#include "TrainingMenuCPUTab.generated.h"

class UHorizontalBox;
class UTrainingMenuPopup;
class UTrainingMenuRow;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTrainingMenuCPUTab : public UTrainingMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_InfiniteShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_CPUPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_CPUDIMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_CPUBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_CPUTech;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_CPUGetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_CPUPummel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_CPUThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_CPULedge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_CPUGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_CPUShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_CPUAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Floorhug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Hitboxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_DILines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_PlayerPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_RecordSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_PlaybackSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_PlaybackMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_LoopPlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_AutoRestore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_InputHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_DebugTitleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_RecordingTitleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuPopup* TrainingMenu;
    
    UTrainingMenuCPUTab();

};

