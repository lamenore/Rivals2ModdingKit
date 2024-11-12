#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TargetDisplayWidget.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTargetDisplayWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_TopRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_BottomRow;
    
    UTargetDisplayWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateTargets(int32 RemainingTargets);
    
};

