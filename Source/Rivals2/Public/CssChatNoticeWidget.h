#pragma once
#include "CoreMinimal.h"
#include "RivalsWidget.h"
#include "CssChatNoticeWidget.generated.h"

class UBorder;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCssChatNoticeWidget : public URivalsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_Border;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ButtonLabelTextBlock;
    
    UCssChatNoticeWidget();

};

