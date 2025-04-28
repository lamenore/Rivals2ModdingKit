#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OrbyChargeBar.generated.h"

class UCanvasPanel;
class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UOrbyChargeBar : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_VisualContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* BP_ProgressBar;
    
    UOrbyChargeBar();

};

