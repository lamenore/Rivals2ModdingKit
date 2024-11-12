#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Framework/Text/TextLayout.h"
#include "Layout/Margin.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "Components/CanvasPanel.h"
#include "EHorizonDialogueTextOverflowWarpMethod_DEPRECATED.h"
#include "EHorizonDialogueTextOverflowWrapMethod.h"
#include "HorizonDialogueBlinkingCursorInfo.h"
#include "HorizonDialogueBlockInfo.h"
#include "HorizonDialogueDialoguePageResult.h"
#include "HorizonDialogueHypertextResult.h"
#include "HorizonDialogueSegmentInfo.h"
#include "HorizonDialogueSegmentInfoStyle.h"
#include "Templates/SubclassOf.h"
#include "HorizonDialogueMsgTextBlock.generated.h"

class UHorizonButton;
class UHorizonDialogueMsgDecorator;
class UHorizonDialogueStyleInfo;
class UHorizonFlipbookWidget;

UCLASS(Blueprintable)
class HORIZONUI_API UHorizonDialogueMsgTextBlock : public UCanvasPanel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonHypertextEvent, const FHorizonDialogueHypertextResult&, InResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonDialoguePageEvent, const FHorizonDialogueDialoguePageResult&, InResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHorizonDialogueMsgEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHorizonDialogueCustomEvent, const FString&, InEventName, const FHorizonDialogueSegmentInfo&, InSegInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonDialogueCharAdvancedEvent, const FHorizonDialogueBlockInfo&, InCurrentBlockInfo);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonHypertextEvent OnHypertextClickedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonHypertextEvent OnHypertextPressedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonHypertextEvent OnHypertextReleasedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonHypertextEvent OnHypertextHoveredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonHypertextEvent OnHypertextUnhoveredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialogueMsgEvent OnDialogueMsgLoopFunction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialogueMsgEvent OnDialogueMsgCompleteFunction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialoguePageEvent OnSetDialoguePageFunction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialoguePageEvent OnDialoguePageEndFunction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialogueMsgEvent OnRebuildDialogueDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialogueCustomEvent OnCustomEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonDialogueCharAdvancedEvent OnCharAdvancedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHorizonDialogueTextOverflowWrapMethod TextOverFlowWrapMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHorizonDialogueTextOverflowWarpMethod_DEPRECATED TextOverFlowWarpMethod;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DialogueMsgSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartTickDialogueMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRepeatDialogueMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatDialogueMsgInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDialogueMsgText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoNextDialogueMsgPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoNextDialogueMsgPageIntervalRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoNextDialogueMsgPageIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoNextDialogueMsgPageIntervalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceRebuildDialogueMsgText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableBlinkingCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonDialogueBlinkingCursorInfo BlinkCursorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UHorizonDialogueStyleInfo>> StyleInfoClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHorizonDialogueSegmentInfoStyle> SegmentStyleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin LineMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHorizonButton> DefaultButtonStyleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UHorizonDialogueMsgDecorator>> DecoratorClasses;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHorizonDialogueStyleInfo*> StyleInfoList;
    
public:
    UHorizonDialogueMsgTextBlock();

    UFUNCTION(BlueprintCallable)
    void StopDialogue();
    
    UFUNCTION(BlueprintCallable)
    void StartDialogue();
    
    UFUNCTION(BlueprintCallable)
    void SkipDialogue();
    
    UFUNCTION(BlueprintCallable)
    void SkipCurrentDialoguePage();
    
    UFUNCTION(BlueprintCallable)
    void SkipCurrentDialogueMsgPageTick();
    
    UFUNCTION(BlueprintCallable)
    void SetTextOverflowWrapMethod(EHorizonDialogueTextOverflowWrapMethod InOverflowWrapMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetTextAndRebuildDialogueImmediately(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetTextAndRebuildDialogue(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowOffset(FVector2D InShadowOffset, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetRepeatDialogueMsgInterval(float interval);
    
    UFUNCTION(BlueprintCallable)
    void SetOpacity(float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStartTickDialogueMsg(bool bShouldStartTick, bool bShouldResetDialogue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsRepeatDialogueMsg(bool B);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDialogueMsgText(bool B);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAutoNextDialogueMsgPage(bool B);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 FontSize);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(FSlateFontInfo InFontInfo, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueMsgSpeed(float Speed, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueMsgPage(int32 InPageIndex, bool bShouldStartTick);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FSlateColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoNextDialogueMsgPageIntervalRate(float InAutoNextDialogueMsgPageIntervalRate);
    
    UFUNCTION(BlueprintCallable)
    void ResumeDialogue();
    
    UFUNCTION(BlueprintCallable)
    void RequestRebuildDialogue();
    
    UFUNCTION(BlueprintCallable)
    void RebuildDialogueMsgTextBlock();
    
    UFUNCTION(BlueprintCallable)
    void PrevDialogueMsgPage(bool bShouldStartTick);
    
    UFUNCTION(BlueprintCallable)
    void PauseDialogue();
    
    UFUNCTION(BlueprintCallable)
    void NextDialogueMsgPage(bool bShouldStartTick);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDialogueMsgPageEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDialogueMsgCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHorizonDialogueTextOverflowWrapMethod GetTextOverflowWrapMethod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTextLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPageTextByIndex(int32 PageIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ETextJustify::Type> GetJustification() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPageTextLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPageIndex();
    
    UFUNCTION(BlueprintCallable)
    UHorizonFlipbookWidget* GetBlinkCursorWidget() const;
    
};

