#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/WidgetComponent.h"
#include "EExpressiveTextLightMode.h"
#include "ExpressiveTextChronos.h"
#include "ExpressiveTextSelector.h"
#include "ExpressiveTextComponent.generated.h"

class UExpressiveTextLightModeMaterialsAsset;
class UExpressiveTextWidgetComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class EXPRESSIVETEXT_API UExpressiveTextComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UExpressiveTextWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressiveTextSelector Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetSpace Space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExpressiveTextLightMode LightMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EmissiveIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetTimingPolicy TimingPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint Resolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldRenderWhenOffscren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CastShadow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UExpressiveTextLightModeMaterialsAsset* LightModeMaterialsAsset;
    
public:
    UExpressiveTextComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SkipReveal() const;
    
    UFUNCTION(BlueprintCallable)
    void SetTextVisibility(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTextHiddenInGame(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCastShadows(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UExpressiveTextWidgetComponent* GetWidgetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetRenderTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetChronos(FExpressiveTextChronos& OutChronos) const;
    
};

