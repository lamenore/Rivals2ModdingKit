#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
#include "ScaleShapeBase.generated.h"

class UMaterialInstance;

UCLASS(Abstract, Blueprintable)
class SCALESHAPE_API UScaleShapeBase : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSolid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShadowEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Smoothness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Thickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlurRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FadeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FadeEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> MaterialVariants;
    
public:
    UScaleShapeBase();

    UFUNCTION(BlueprintCallable)
    void SetThickness(float InThickness);
    
    UFUNCTION(BlueprintCallable)
    void SetSpreadRadius(float InSpreadRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetSmoothness(float InSmoothness);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowOffset(FVector2D InShadowOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowColor(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetMargin(FMargin InMargin);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSolid(bool bInIsSolid);
    
    UFUNCTION(BlueprintCallable)
    void SetIsShadowEnabled(bool bInIsShadowEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFaded(bool bInIsFaded);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeStart(FVector2D InFadeStart);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeEnd(FVector2D InFadeEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetBlurRadius(float InBlurRadius);
    
};

