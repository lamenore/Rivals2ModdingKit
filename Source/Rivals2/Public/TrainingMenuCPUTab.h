#pragma once
#include "CoreMinimal.h"
#include "TrainingMenuTabInterface.h"
#include "TrainingMenuCPUTab.generated.h"

class UTrainingMenuRow;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTrainingMenuCPUTab : public UTrainingMenuTabInterface {
    GENERATED_BODY()
public:
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
    UTrainingMenuRow* BP_TrainingMenuRow_Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_PlayerPercent;
    
    UTrainingMenuCPUTab();

};

