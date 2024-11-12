#pragma once
#include "CoreMinimal.h"
#include "RivalsWidget.h"
#include "CssChatBubbleWidget.generated.h"

class UBetterImage;
class UBorder;
class UEmoteData;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCssChatBubbleWidget : public URivalsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_Border;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterImage* BP_EmoteImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ButtonLabelTextBlock;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEmoteData* EmoteData;
    
public:
    UCssChatBubbleWidget();

};

