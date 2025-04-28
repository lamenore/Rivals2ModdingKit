#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Components/ContentWidget.h"
#include "ScaleShapeBoxShadow.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable)
class SCALESHAPE_API UScaleShapeBoxShadow : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlurRadius;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush ShadowBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> MaterialVariants;
    
public:
    UScaleShapeBoxShadow();

    UFUNCTION(BlueprintCallable)
    void SetSpreadRadius(float InSpreadRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetOffset(FVector2D InOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInset(bool bInIsInset);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetBlurRadius(float InBlurRadius);
    
};

