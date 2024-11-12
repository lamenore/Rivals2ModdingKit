#pragma once
#include "CoreMinimal.h"
#include "MenuRivalCapture.h"
#include "GameOverRivalCapture.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class RIVALS2_API AGameOverRivalCapture : public AMenuRivalCapture {
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
    
    AGameOverRivalCapture(const FObjectInitializer& ObjectInitializer);

};

