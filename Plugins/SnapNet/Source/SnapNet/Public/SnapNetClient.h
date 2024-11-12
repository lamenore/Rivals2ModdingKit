#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESnapNetClientConnectionStatus.h"
#include "ESnapNetRenderInterpolationMethod.h"
#include "Templates/SubclassOf.h"
#include "SnapNetClient.generated.h"

class APlayerController;
class ULocalPlayer;
class USnapNetClient;
class USnapNetInput;
class USnapNetPacketCodec;
class USnapNetReliableMessage;
class USnapNetSimulation;
class USnapNetTransport;

UCLASS(Blueprintable)
class SNAPNET_API USnapNetClient : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HistoryTimeAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USnapNetInput* Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LocalPlayerJoinRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USnapNetPacketCodec* PacketCodec;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 ProtocolId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USnapNetSimulation* Simulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USnapNetTransport* Transport;
    
public:
    USnapNetClient();

    UFUNCTION(BlueprintCallable)
    void SetTransportClass(TSubclassOf<USnapNetTransport> transportClass);
    
    UFUNCTION(BlueprintCallable)
    void SetSpectatingLagCompensationEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSpectatedPlayerIndexForReplay(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetReplayLagCompensation(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderInterpolationMethod(ESnapNetRenderInterpolationMethod RenderInterpolationMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetPredictedMaxMilliseconds(int32 Milliseconds);
    
    UFUNCTION(BlueprintCallable)
    void SetPacketSimulationLoss(float Percentage);
    
    UFUNCTION(BlueprintCallable)
    void SetPacketSimulationLatency(int32 Milliseconds);
    
    UFUNCTION(BlueprintCallable)
    void SetPacketSimulationJitter(int32 Milliseconds);
    
    UFUNCTION(BlueprintCallable)
    void SetPacketCodecClass(TSubclassOf<USnapNetPacketCodec> PacketCodecClass);
    
    UFUNCTION(BlueprintCallable)
    void SetInputDelayBeforePredictionMinMilliseconds(int32 Milliseconds);
    
    UFUNCTION(BlueprintCallable)
    void SetInputDelayBeforePredictionMaxMilliseconds(int32 Milliseconds);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalJitterBufferMilliseconds(int32 Milliseconds);
    
    UFUNCTION(BlueprintCallable)
    void SendReliableMessage(int32 LocalPlayerIndex, USnapNetReliableMessage* Message);
    
    UFUNCTION(BlueprintCallable)
    void SeekReplay(int32 Time);
    
    UFUNCTION(BlueprintCallable)
    bool PlayReplayFile(const FString& Filename, int32& StartTime, int32& EndTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectatingLagCompensationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReplayLagCompensationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingReplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingInstantReplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerIndexSpectatedLocally(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerIndexLocal(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNetworkSimulationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoopback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnectionInterrupted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetTransport* GetTransport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpectatedPlayerIndexForReplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpectatedPlayerIndex(int32 LocalPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSimulationTimeScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetSimulation* GetSimulation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPredictedMaxMilliseconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPredictedFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex(int32 LocalPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerControllerForPlayerIndex(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPacketLossFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPacketLatencySeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPacketJitterSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetPacketCodec* GetPacketCodec() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalPlayerIndexForPlayerIndex(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalPlayerIndexForLocalPlayer(ULocalPlayer* LocalPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKbpsSent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKbpsReceived() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJitterBufferSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInstantReplaySlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInstantReplayContextEntityIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInputDelayFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInputDelayBeforePredictionMinMilliseconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInputDelayBeforePredictionMaxMilliseconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESnapNetClientConnectionStatus GetConnectionStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBufferedRemoteInputs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAdditionalJitterBufferMilliseconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USnapNetClient* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesCurrentSceneMatchSimulation() const;
    
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
};

