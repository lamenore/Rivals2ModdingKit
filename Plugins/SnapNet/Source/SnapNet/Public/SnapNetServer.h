#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "SnapNetServer.generated.h"

class ASnapNetAIController;
class USnapNetPacketCodec;
class USnapNetReliableMessage;
class USnapNetServer;
class USnapNetServerScript;
class USnapNetSimulation;
class USnapNetTransport;

UCLASS(Blueprintable)
class SNAPNET_API USnapNetServer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASnapNetAIController*> BotControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USnapNetPacketCodec* PacketCodec;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 ProtocolId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRewinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USnapNetServerScript* ServerScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USnapNetSimulation* Simulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USnapNetTransport* Transport;
    
public:
    USnapNetServer();

    UFUNCTION(BlueprintCallable)
    void StopServer();
    
    UFUNCTION(BlueprintCallable)
    void StopReplayRecording();
    
    UFUNCTION(BlueprintCallable)
    void StopPacketCapture();
    
    UFUNCTION(BlueprintCallable)
    void StopInstantReplay(int32 ClientIndex);
    
    UFUNCTION(BlueprintCallable)
    void StartServer(TSubclassOf<USnapNetServerScript> ServerScriptClass);
    
    UFUNCTION(BlueprintCallable)
    void StartSavedInstantReplay(int32 SlotIndex, int32 ClientIndex, int32 spectatedPlayerIndex, int32 contextEntityIndex);
    
    UFUNCTION(BlueprintCallable)
    void StartReplayRecording();
    
    UFUNCTION(BlueprintCallable)
    void StartPacketCapture();
    
    UFUNCTION(BlueprintCallable)
    void StartInstantReplay(int32 ClientIndex, int32 spectatedPlayerIndex, int32 contextEntityIndex, int32 StartTime, int32 EndTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTransportClass(TSubclassOf<USnapNetTransport> transportClass);
    
    UFUNCTION(BlueprintCallable)
    void SetSpectatedPlayerIndex(int32 PlayerIndex, int32 spectatedPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetPacketCodecClass(TSubclassOf<USnapNetPacketCodec> PacketCodecClass);
    
    UFUNCTION(BlueprintCallable)
    void SendReliableMessage(int32 PlayerIndex, USnapNetReliableMessage* Message);
    
    UFUNCTION(BlueprintCallable)
    void SendEntityToPlayer(int32 EntityIndex, int32 PlayerIndex, bool send);
    
    UFUNCTION(BlueprintCallable)
    void SendEntityToNoPlayers(int32 EntityIndex);
    
    UFUNCTION(BlueprintCallable)
    void SendEntityToAllPlayers(int32 EntityIndex);
    
    UFUNCTION(BlueprintCallable)
    void SaveReplayFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void SaveInstantReplay(int32 SlotIndex, int32 StartTime, int32 EndTime);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayer(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterString(FName StringPoolName, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRewinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingInstantReplay(int32 ClientIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitySentToPlayer(int32 EntityIndex, int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntityPredictedForPlayer(int32 EntityIndex, int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientConnected(int32 ClientIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBot(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetTransport* GetTransport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimeMilliseconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpectatedPlayerIndex(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetSimulation* GetSimulation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetServerScript* GetServerScript() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerInterpolationTimeMilliseconds(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex(int32 ClientIndex, int32 LocalPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPacketLatencySeconds(int32 ClientIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetPacketCodec* GetPacketCodec() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClientIndex(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USnapNetServer* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ForceNewBaseline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesEntityRequireOwnerInput(int32 EntityIndex) const;
    
};

