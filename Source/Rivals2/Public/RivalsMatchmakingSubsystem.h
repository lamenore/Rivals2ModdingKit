#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PingQoSInfo.h"
#include "CancelAllMatchmakingTicketsErrorDelegate.h"
#include "CancelAllMatchmakingTicketsSuccessDelegate.h"
#include "CreateMatchmakingTicketErrorDelegate.h"
#include "ERivalsConnectionLeniency.h"
#include "MatchmakingStateChangeDelegate.h"
#include "RivalsEdgegapLocationInfo.h"
#include "RivalsPlayFabMatchmakingTicketInfo.h"
#include "RivalsMatchmakingSubsystem.generated.h"

class UObject;
class URivalsMatchmakingSubsystem;

UCLASS(Blueprintable)
class RIVALS2_API URivalsMatchmakingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsPlayFabMatchmakingTicketInfo> CurrentMatchmakingTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentMatchmakingTicketStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPollingEdgegapSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerRegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerConnectionString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsEdgegapLocationInfo> EdgegapLocations;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelAllMatchmakingTicketsSuccess CancelAllMatchmakingTicketsSuccessDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelAllMatchmakingTicketsError CancelAllMatchmakingTicketsErrorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateMatchmakingTicketError CreateMatchmakingTicketErrorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchmakingStateChange MatchmakingTicketCancelledDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchmakingStateChange MatchFoundDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchmakingStateChange JoinMatchSuccessDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchmakingStateChange JoinMatchErrorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchmakingStateChange EdgegapSessionJoinedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastMatchmadeQueue;
    
public:
    URivalsMatchmakingSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateReconnectData();
    
    UFUNCTION(BlueprintCallable)
    void SetRegionAcceptMatchmaking(const FString& InRegion, const bool bInShouldAcceptMatchmaking);
    
    UFUNCTION(BlueprintCallable)
    void SetLastMatchmadeQueue(const FString& InQueueName);
    
    UFUNCTION(BlueprintCallable)
    void SetConnectionLeniency(const ERivalsConnectionLeniency& InLeniency);
    
    UFUNCTION(BlueprintCallable)
    void RequestPublicIp();
    
    UFUNCTION(BlueprintCallable)
    void QueueForMatchmaking(const TArray<FString>& QueueNames, const TArray<FString>& MembersToMatchWith);
    
    UFUNCTION(BlueprintCallable)
    void PollServerConnection(const FString& ConnectionString);
    
    UFUNCTION(BlueprintCallable)
    void PollMatchUserData(const FString& MatchID);
    
    UFUNCTION(BlueprintCallable)
    void PingQosBeacons(bool bShouldPrintPings);
    
    UFUNCTION(BlueprintCallable)
    void OnPingQosBeaconsComplete(const TArray<FPingQoSInfo>& Result);
    
    UFUNCTION(BlueprintCallable)
    void JoinMatchmakingTicket(const FString& InTicketId, const FString& InQueueName);
    
    UFUNCTION(BlueprintCallable)
    void JoinEdgegapSession(const FString& MatchID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUserPublicIpValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsQueueRanked(const FString& InQueueName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsQueueLobby(const FString& InQueueName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    bool IsConnectingToServer();
    
    UFUNCTION(BlueprintCallable)
    void InitializeReconnectData(const FString& InConnectionString, const FString& InQueueName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidRegionsSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUserPublicIp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSinglesQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRankedQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLobby4pQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLobby3pQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLobby2pQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLastMatchmadeQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFFAQueue();
    
    UFUNCTION(BlueprintCallable)
    void GetEdgegapSessionInfo(const FString& SessionId);
    
    UFUNCTION(BlueprintCallable)
    void GetEdgegapLocations(int32 InPage);
    
    UFUNCTION(BlueprintCallable)
    FRivalsEdgegapLocationInfo GetEdgegapLocationInfoByCityName(const FString& InCityName);
    
    UFUNCTION(BlueprintCallable)
    void GetEdgegapLocationBeacons();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDoublesQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsConnectionLeniency GetConnectionLeniency();
    
    UFUNCTION(BlueprintCallable)
    void GetAllEdgegapLocations();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URivalsMatchmakingSubsystem* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void DebugJoinServer(const FString& IP, const FString& Port);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CouldAttemptReconnection();
    
    UFUNCTION(BlueprintCallable)
    void ConnectToServer(const FString& ConnectionString);
    
    UFUNCTION(BlueprintCallable)
    void ClearReconnectData();
    
    UFUNCTION(BlueprintCallable)
    void ClearMatchUserData(const FString& MatchID);
    
    UFUNCTION(BlueprintCallable)
    void CheckQosPings(bool bShouldForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void CheckAllMatchmakingTickets();
    
    UFUNCTION(BlueprintCallable)
    void CancelAllMatchmakingTickets(const bool bIsMatchFound);
    
    UFUNCTION(BlueprintCallable)
    void AttemptReconnect();
    
};

