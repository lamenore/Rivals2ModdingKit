#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuButtonCheckmark.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMenuButtonCheckmark : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_CheckmarkAppearAnim;
    
    UMenuButtonCheckmark();

};

