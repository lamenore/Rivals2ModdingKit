#pragma once
#include "CoreMinimal.h"
#include "TrainingMenuTabInterface.h"
#include "TrainingMenuPlaybackTab.generated.h"

class UTrainingMenuRow;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTrainingMenuPlaybackTab : public UTrainingMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_AutoRestoreCpu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_AutoRestorePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_CpuIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_LoopPlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_StartPlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_StopPlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_PlaybackSlot_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_PlaybackSlot_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_PlaybackSlot_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_PlaybackSlot_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_PlaybackSlot_5;
    
    UTrainingMenuPlaybackTab();

};

