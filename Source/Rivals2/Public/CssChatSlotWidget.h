#pragma once
#include "CoreMinimal.h"
#include "ClientBehavior.h"
#include "Templates/SubclassOf.h"
#include "CssChatSlotWidget.generated.h"

class ARivalsPlayerController;
class UBorder;
class UCssChatBubbleWidget;
class UCssChatEmoteTab;
class UCssChatNoticeWidget;
class URivalsButtonWidget;
class UScrollBox;
class UTextBlock;
class UVerticalBox;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCssChatSlotWidget : public UClientBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_TabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_ChatTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* BP_ChatScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCssChatEmoteTab* BP_EmoteTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_SendMessageBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_SendMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_ButtonInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCssChatBubbleWidget> BP_ChatBubbleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCssChatNoticeWidget> BP_ChatNoticeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightStickScrollScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsPlayerController* PlayerController;
    
public:
    UCssChatSlotWidget();

    UFUNCTION(BlueprintCallable)
    void OpenEmoteTab(ARivalsPlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusLostByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmoteTabOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARivalsPlayerController* GetPlayerController();
    
    UFUNCTION(BlueprintCallable)
    void CloseEmoteTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnReleasedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPressedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFocusLostByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFocusedByPlayer(const int32 UserIndex);
    
};

