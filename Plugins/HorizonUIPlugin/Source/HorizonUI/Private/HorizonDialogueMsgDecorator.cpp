#include "HorizonDialogueMsgDecorator.h"

UHorizonDialogueMsgDecorator::UHorizonDialogueMsgDecorator() {
}

bool UHorizonDialogueMsgDecorator::Run_Implementation(UHorizonDialogueMsgTextBlock* InMsgTextBlock, FHorizonDialogueBlockInfo& InDialogueBlockInfo, FHorizonDialogueSegmentInfo& InSegInfo) {
    return false;
}

bool UHorizonDialogueMsgDecorator::PreRun_Implementation(UHorizonDialogueMsgTextBlock* InMsgTextBlock, FHorizonDialogueBlockInfo& InDialogueBlockInfo, FHorizonDialogueSegmentInfo& InSegInfo) {
    return false;
}

bool UHorizonDialogueMsgDecorator::BuildSegment_Implementation(UHorizonDialogueMsgTextBlock* InMsgTextBlock, int32 InCurrentSegInfoIndex, FHorizonDialogueSegmentInfo& InCurrentSegInfo, const TArray<FHorizonDialogueSegmentInfo>& InSegInfos) {
    return false;
}


