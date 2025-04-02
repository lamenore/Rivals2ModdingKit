#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "ExpressiveTextSettings.generated.h"

class AExpressiveTextDebugger;
class UExpressiveTextDefaultStyle;
class UExpressiveTextLightModeMaterialsAsset;
class UExpressiveTextSettings;
class UMaterial;
class UMaterialFunctionInterface;
class UMaterialFunctionMaterialLayer;
class UUserWidget;

UCLASS(Blueprintable, DefaultConfig, Config=ExpressiveText)
class EXPRESSIVETEXT_API UExpressiveTextSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath CustomDownloadedFontsDirectory;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> ExpressiveTextWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UExpressiveTextDefaultStyle> DefaultStyleAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UExpressiveTextLightModeMaterialsAsset> LightModeMaterialsAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialFunctionMaterialLayer> BaseTextLayer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialFunctionMaterialLayer> BaseSdfResolveLayer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialFunctionInterface> BaseTextLayerBlend;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> BaseTextMaterial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AExpressiveTextDebugger> DebuggerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> TagHighlightingColors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopShaderPatchPrompts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RevertShaderPatch;
    
    UExpressiveTextSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UExpressiveTextSettings* GetExpressiveTextSettings();
    
};

