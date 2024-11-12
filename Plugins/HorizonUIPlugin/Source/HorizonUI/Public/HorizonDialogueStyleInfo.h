#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HorizonDialogueSegmentInfoStyle.h"
#include "HorizonDialogueStyleInfo.generated.h"

UCLASS(Blueprintable)
class HORIZONUI_API UHorizonDialogueStyleInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHorizonDialogueSegmentInfoStyle> SegmentStyleList;
    
    UHorizonDialogueStyleInfo();

};

