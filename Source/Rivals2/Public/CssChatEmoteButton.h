#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Blueprint/UserWidget.h"
#include "CssChatEmoteButton.generated.h"

class UBetterImage;
class UBorder;
class UCssChatEmoteTab;
class UEmoteData;
class URivalsButtonWidget;
class USizeBox;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCssChatEmoteButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNavigationDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_Border;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterImage* BP_EmoteImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ButtonLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* BP_FavoriteBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_ButtonInteract;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCssChatEmoteTab* ParentTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEmoteData* EmoteData;
    
public:
    UCssChatEmoteButton();

    UFUNCTION(BlueprintCallable)
    void OnReleasedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    UWidget* OnNavigateButtons(EUINavigation NavigationDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusLostByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAction3ReleasedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnReleasedByPlayer(const int32 PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPressedByPlayer(const int32 PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFocusLostByPlayer(const int32 PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFocusedByPlayer(const int32 PlayerSlot);
    
};

