#pragma once
#include "CoreMinimal.h"
#include "RivalsMenuButtonWidget.h"
#include "PauseMenuButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPauseMenuButton : public URivalsMenuButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextWidth;
    
public:
    UPauseMenuButton();

};

