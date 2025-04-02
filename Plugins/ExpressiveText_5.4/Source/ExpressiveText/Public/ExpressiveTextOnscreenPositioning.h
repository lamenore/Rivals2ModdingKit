#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ExpressiveTextPositioningMethod.h"
#include "ExpressiveTextOnscreenPositioning.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class EXPRESSIVETEXT_API UExpressiveTextOnscreenPositioning : public UExpressiveTextPositioningMethod {
    GENERATED_BODY()
public:
    UExpressiveTextOnscreenPositioning();

    UFUNCTION(BlueprintCallable)
    void Populate(FVector2D EditorViewportSize, FVector2D InPreviewBoxTopLeftCorner, FVector2D InPreviewBoxSize);
    
};

