#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "RivalsDialoguePrompt.generated.h"

class UBetterButtonDisplayer;
class UImage;
class URivalsDialogueGroup;
class URivalsExpressiveTextWidget;
class UTextBlock;
class UTexture2D;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URivalsDialoguePrompt : public UBasePopupWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAcceptInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsDialogueGroup* DialogueGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UTexture2D*> CharacterPortraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_DialogueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsExpressiveTextWidget* BP_BodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_CharacterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharPrintDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_DialogueEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_DialogueExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_DialogueAdvance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterButtonDisplayer* BP_PageDoneButtonDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BP_PageDoneBouncer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndOfPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentPageIndex;
    
public:
    URivalsDialoguePrompt();

    UFUNCTION(BlueprintCallable)
    void SetupDialogue(URivalsDialogueGroup* Dialogue, bool bShowCar);
    
    UFUNCTION(BlueprintCallable)
    void ResetDialogue();
    
    UFUNCTION(BlueprintCallable)
    bool IsKeyboard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndOfPage();
    
    UFUNCTION(BlueprintCallable)
    void InitDialogue();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalPages();
    
    UFUNCTION(BlueprintCallable)
    FText GetFullPageText();
    
    UFUNCTION(BlueprintCallable)
    void AdvancePage();
    
};

