#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SnapNetGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SNAPNET_API USnapNetGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    USnapNetGameInstance();

    UFUNCTION(BlueprintCallable, Exec)
    void StopSnapNetReplayRecording();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopSnapNetPacketCapture();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartSnapNetReplayRecording();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartSnapNetPacketCapture();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpectateSnapNetReplay(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SnapNetReplayLagCompensation(int32 Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SeekSnapNetReplay(int32 Time);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveSnapNetReplay(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlaySnapNetReplay(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ConnectSnapNetClient(const FString& URL);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AdvanceSingleSnapNetFrame(int32 Enabled);
    
};

