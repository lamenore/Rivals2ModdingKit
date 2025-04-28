#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertyVector2D.h"
#include "RivalsArticleEntity.h"
#include "RivalsTargetWindowData.h"
#include "RivalsTargetEntity.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ARivalsTargetEntity : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 TargetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 TargetWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 TargetWindowTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector2D TargetVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsTargetWindowData> TargetWindows;
    
    ARivalsTargetEntity(const FObjectInitializer& ObjectInitializer);

};

