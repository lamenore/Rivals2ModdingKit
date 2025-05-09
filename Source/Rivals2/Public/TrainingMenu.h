#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "TrainingMenu.generated.h"

class UHorizontalBox;
class UMaterialInstance;
class UTrainingMenuCPUTab;
class UTrainingMenuDebugTab;
class UTrainingMenuGeneralTab;
class UTrainingMenuPlaybackTab;
class UTrainingMenuRecordingTab;
class UTrainingMenuTabButton;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTrainingMenu : public UBasePopupWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* HoveredThumbnailMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* DefaultThumbnailMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_TabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuGeneralTab* BP_GeneralTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuCPUTab* BP_CpuTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuDebugTab* BP_DebugTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRecordingTab* BP_RecordingTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuPlaybackTab* BP_PlaybackTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuTabButton* BP_GeneralTabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuTabButton* BP_CpuTabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuTabButton* BP_DebugTabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuTabButton* BP_RecordingTabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuTabButton* BP_PlaybackTabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_TabBox;
    
    UTrainingMenu();

private:
    UFUNCTION(BlueprintCallable)
    void OnRecordingTabPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPlaybackTabPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnGeneralTabPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDebugTabPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCpuTabPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseReleased(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseLostFocus(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseFocused(const int32 UserIndex);
    
};

