#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ReplayHeaderData.h"
#include "RivalsReplaySubsystem.generated.h"

class UImage;
class UObject;
class UReplayTimeline;
class URivalsReplaySubsystem;

UCLASS(Blueprintable)
class RIVALS2_API URivalsReplaySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplayPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TimelineInOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplayTimeline* ReplayTimeline;
    
    URivalsReplaySubsystem();

    UFUNCTION(BlueprintCallable)
    void SetTimelineInOut(float TimelineWidth, UImage* SliderBackground, bool OffsetLeft, float NewOffset, int32 CurrentTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTimelineFromKeyframes(float TimelineWidth, UImage* SliderBackground);
    
    UFUNCTION(BlueprintCallable)
    void SetReplayFilename(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SeekReplayFromStick(float RightStickAxis);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SeekReplay(int32 Time);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayAssetsLoaded();
    
    UFUNCTION(BlueprintCallable)
    bool IsReplayValid(FReplayHeaderData HeaderData);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadingReplay();
    
    UFUNCTION(BlueprintCallable)
    void InitProtocolID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayTimeline* GetReplayTimeline();
    
    UFUNCTION(BlueprintCallable)
    int32 GetReplayStartTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FReplayHeaderData GetReplayHeaderData(const FString& Filename) const;
    
    UFUNCTION(BlueprintCallable)
    FString GetReplayFilename();
    
    UFUNCTION(BlueprintCallable)
    int32 GetReplayEndTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentReplayMs();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentReplayFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URivalsReplaySubsystem* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GenerateSeekMarkers();
    
};

