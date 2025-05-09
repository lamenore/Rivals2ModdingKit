#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERecordingStatus.h"
#include "RecordingIndicatorWidget.generated.h"

class UImage;
class UTextBlock;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URecordingIndicatorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERecordingStatus, UTexture2D*> RecordingIcons;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_FrameCounterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_StatusIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_RecordingLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_PlayingLoopAnim;
    
public:
    URecordingIndicatorWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateIcon(bool bIsPlayback, bool bIsRecording);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameCount(int32 CurrentFrame, int32 TotalFrames);
    
};

