#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BotMatchDetailsWidget.generated.h"

class UCharacterSelectScreen;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UBotMatchDetailsWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_BotMatchLevelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_BotMatchTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnLeveledUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterSelectScreen* ParentCSS;
    
public:
    UBotMatchDetailsWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateText(const int32& NewLevel, const int32& PreviousLevel, UCharacterSelectScreen* InParent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBotMatchDetailsUpdated(const int32& NewLevel, bool bLeveledUp);
    
};

