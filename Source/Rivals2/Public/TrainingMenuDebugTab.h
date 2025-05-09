#pragma once
#include "CoreMinimal.h"
#include "TrainingMenuTabInterface.h"
#include "TrainingMenuDebugTab.generated.h"

class UTrainingMenuRow;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTrainingMenuDebugTab : public UTrainingMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_TimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Hitboxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_DILines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* BP_TrainingMenuRow_Collision;
    
    UTrainingMenuDebugTab();

};

