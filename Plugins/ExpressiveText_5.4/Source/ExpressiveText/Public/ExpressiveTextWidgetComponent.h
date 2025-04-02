#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "ExpressiveTextWidgetComponent.generated.h"

class UExpressiveTextWidget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class EXPRESSIVETEXT_API UExpressiveTextWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UExpressiveTextWidget* UserWidget;
    
    UExpressiveTextWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

