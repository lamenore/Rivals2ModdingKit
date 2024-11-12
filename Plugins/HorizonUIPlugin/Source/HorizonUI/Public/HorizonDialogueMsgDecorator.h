#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HorizonDialogueBlockInfo.h"
#include "HorizonDialogueSegmentInfo.h"
#include "HorizonDialogueMsgDecorator.generated.h"

class UHorizonDialogueMsgTextBlock;

UCLASS(Abstract, Blueprintable)
class HORIZONUI_API UHorizonDialogueMsgDecorator : public UObject {
    GENERATED_BODY()
public:
    UHorizonDialogueMsgDecorator();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Run(UHorizonDialogueMsgTextBlock* InMsgTextBlock, UPARAM(Ref) FHorizonDialogueBlockInfo& InDialogueBlockInfo, UPARAM(Ref) FHorizonDialogueSegmentInfo& InSegInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PreRun(UHorizonDialogueMsgTextBlock* InMsgTextBlock, UPARAM(Ref) FHorizonDialogueBlockInfo& InDialogueBlockInfo, UPARAM(Ref) FHorizonDialogueSegmentInfo& InSegInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BuildSegment(UHorizonDialogueMsgTextBlock* InMsgTextBlock, int32 InCurrentSegInfoIndex, UPARAM(Ref) FHorizonDialogueSegmentInfo& InCurrentSegInfo, const TArray<FHorizonDialogueSegmentInfo>& InSegInfos);
    
};

