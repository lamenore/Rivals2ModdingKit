#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERivalsBufferedInputAction.h"
#include "Templates/SubclassOf.h"
#include "InputHistoryItem.generated.h"

class UActionDisplayer;
class UBetterButtonDisplayer;
class UHorizontalBox;
class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UInputHistoryItem : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBetterButtonDisplayer> ButtonDisplayerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERivalsBufferedInputAction> InputActions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 HoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_DurationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_ActionsBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActionDisplayer*> ActionDisplayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_Divider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_AppearFlairAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionDisplayer* BP_ActionDisplayer_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionDisplayer* BP_ActionDisplayer_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionDisplayer* BP_ActionDisplayer_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionDisplayer* BP_ActionDisplayer_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionDisplayer* BP_ActionDisplayer_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionDisplayer* BP_ActionDisplayer_5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionDisplayer* BP_ActionDisplayer_6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionDisplayer* BP_ActionDisplayer_7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionDisplayer* BP_ActionDisplayer_8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionDisplayer* BP_ActionDisplayer_9;
    
    UInputHistoryItem();

    UFUNCTION()
    void SetFrameDuration(uint32 TotalFrames);
    
    UFUNCTION(BlueprintCallable)
    void SetActions(TArray<ERivalsBufferedInputAction> Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStringForAction(ERivalsBufferedInputAction Action);
    
    UFUNCTION(BlueprintCallable)
    void ClearActions();
    
};

