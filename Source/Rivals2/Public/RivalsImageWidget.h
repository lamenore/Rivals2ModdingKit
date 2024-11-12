#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/Image.h"
#include "Components/Widget.h"
#include "RivalsImageWidget.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsImageWidget : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f ShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrokeSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StrokeColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor ShadowColorAndOpacityDelegate;
    
    URivalsImageWidget();

    UFUNCTION(BlueprintCallable)
    void SetStrokeSize(float InStrokeSize);
    
    UFUNCTION(BlueprintCallable)
    void SetStrokeColorAndOpacity(FLinearColor InStrokeColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowOffset(FVector2f InShadowOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    
};

