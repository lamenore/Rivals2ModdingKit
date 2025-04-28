#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseTopBar.generated.h"

class URivalsButtonWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UBaseTopBar : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ScreenName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ScreenNameTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_BackAreaButton;
    
    UBaseTopBar();

    UFUNCTION(BlueprintCallable)
    void OnBackAreaButtonReleased(const int32 UserIndex);
    
};

