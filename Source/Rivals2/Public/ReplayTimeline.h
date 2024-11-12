#pragma once
#include "CoreMinimal.h"
#include "RivalsWidget.h"
#include "Templates/SubclassOf.h"
#include "ReplayTimeline.generated.h"

class UCanvasPanel;
class UImage;
class UKeyframe;
class URivalsDollyCamera;
class UTextureRenderTarget2D;
class UTimelineMarker;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UReplayTimeline : public URivalsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTimelineMarker> MarkerWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_TimelineCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_TimelinePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_CameraPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineMarker* SelectedMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWidgetVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsDollyCamera* DollyCamera;
    
    UReplayTimeline();

    UFUNCTION(BlueprintCallable)
    void UpdateMarkers();
    
    UFUNCTION(BlueprintCallable)
    void ToggleTimeline();
    
    UFUNCTION(BlueprintCallable)
    void ShowTimeline();
    
    UFUNCTION(BlueprintCallable)
    void SetTimelineVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetReplayPaused(bool ReplayPaused);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMarker(UKeyframe* Keyframe);
    
    UFUNCTION(BlueprintCallable)
    bool IsReplayPaused();
    
    UFUNCTION(BlueprintCallable)
    void HideTimeline();
    
    UFUNCTION(BlueprintCallable)
    UTimelineMarker* CanEditMarker();
    
    UFUNCTION(BlueprintCallable)
    void AddMarker(UKeyframe* Keyframe);
    
};

