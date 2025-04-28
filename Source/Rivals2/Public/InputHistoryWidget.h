#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERivalsBufferedInputAction.h"
#include "ERivalsSessionState.h"
#include "Templates/SubclassOf.h"
#include "InputHistoryWidget.generated.h"

class UCanvasPanel;
class UInputHistoryItem;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UInputHistoryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInputHistoryItem*> HistoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERivalsBufferedInputAction> HeldActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputHistoryItem* CurrentItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NextItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInputHistoryItem> BP_HistoryItemInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_HistoryCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_InputList;
    
    UInputHistoryWidget();

    UFUNCTION(BlueprintCallable)
    void OnMatchRestarted(ERivalsSessionState SessionState);
    
};

