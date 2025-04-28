#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "BasePopupWidget.h"
#include "EMarkerCameraType.h"
#include "ReplaySettingsPopup.generated.h"

class ARivalsCamera;
class ULevelSequence;
class UMaterialParameterCollection;
class UMenuButtonWidget;
class UMoviePipelineCommandLineEncoderSettings;
class UMoviePipelinePrimaryConfig;
class UReplaySettingsOutputTab;
class UTextBlock;
class UWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UReplaySettingsPopup : public UBasePopupWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMarkerCameraType CameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_TabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_ExportButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ErrorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplaySettingsOutputTab* BP_OutputSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_ErrorTextAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsCamera* RivalsCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC_GameplayValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoviePipelinePrimaryConfig* MRQ_Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoviePipelineCommandLineEncoderSettings* CommandLineEncoderSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint ExportResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExportFrameRate;
    
    UReplaySettingsPopup();

    UFUNCTION(BlueprintCallable)
    UWidget* OnNavigate(EUINavigation Direction);
    
    UFUNCTION(BlueprintCallable)
    void OnExportPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClosePressed(const int32 UserIndex);
    
};

