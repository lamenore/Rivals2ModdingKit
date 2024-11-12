#pragma once
#include "CoreMinimal.h"
#include "MenuRivalCaptureRenderData.h"
#include "GameOverRivalCaptureRenderData.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class RIVALS2_API UGameOverRivalCaptureRenderData : public UMenuRivalCaptureRenderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AN_Taunt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AN_KnockdownStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AN_NeutralGetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AN_Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AN_Hitstun_Heavy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AN_Tumble;
    
    UGameOverRivalCaptureRenderData();

};

