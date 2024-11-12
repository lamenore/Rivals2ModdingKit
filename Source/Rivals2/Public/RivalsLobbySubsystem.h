#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ERivalsPlayFabLobbyAccessPolicy.h"
#include "LeaveLobbyFailedEventDelegate.h"
#include "LobbyConnectionLostEventDelegate.h"
#include "LobbyInvitationAcceptedFailedEventDelegate.h"
#include "OnAcceptLobbyInviteEventDelegate.h"
#include "OnLobbyCreateFailedEventDelegate.h"
#include "OnLobbyInfoEventDelegate.h"
#include "OnLobbyJoinFailedEventDelegate.h"
#include "OnLobbyLeftEventDelegate.h"
#include "PlayFabOssFindLobbiesFailedEventDelegate.h"
#include "PlayFabOssFindLobbiesSuccessEventDelegate.h"
#include "PlayFabOssLobbyParticipantsChangedEventDelegate.h"
#include "PlayFabOssReceivedLobbySettingsUpdateEventDelegate.h"
#include "RivalsLobbyType.h"
#include "RivalsPlayFabLobbyInfo.h"
#include "RivalsPlayFabPlayerInformation.h"
#include "UpdateLobbySettingsFailedEventDelegate.h"
#include "UpdateLobbySettingsSuccessEventDelegate.h"
#include "RivalsLobbySubsystem.generated.h"

class UObject;
class URivalsLobbySubsystem;

UCLASS(Blueprintable)
class RIVALS2_API URivalsLobbySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsPlayFabLobbyInfo CurrentLobbyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsPlayFabLobbyInfo> SearchLobbyResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FRivalsPlayFabPlayerInformation> PlayerInformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpectatorLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyInfoEvent OnCreatedLobbyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyInfoEvent OnJoinedLobbyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyJoinFailedEvent OnJoinLobbyFailedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyCreateFailedEvent OnCreateLobbyFailedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyLeftEvent OnLobbyLeftEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAcceptLobbyInviteEvent OnAcceptLobbyInviteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayFabOssFindLobbiesSuccessEvent OnPlayFabOssFindLobbiesSuccessEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayFabOssFindLobbiesFailedEvent OnPlayFabOssFindLobbiesFailedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayFabOssReceivedLobbySettingsUpdateEvent OnPlayFabOssReceivedLobbySettingsUpdateEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayFabOssLobbyParticipantsChangedEvent OnPlayFabOssLobbyParticipantsChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaveLobbyFailedEvent OnLeaveLobbyFailedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyInvitationAcceptedFailedEvent OnLobbyInvitationAcceptedFailedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateLobbySettingsSuccessEvent OnUpdateLobbySettingsUpdateSuccessEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateLobbySettingsFailedEvent OnUpdateLobbySettingsUpdateFailedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyConnectionLostEvent OnLobbyConnectionLostEvent;
    
    URivalsLobbySubsystem();

    UFUNCTION(BlueprintCallable)
    void ToggleSpectatorLobby(const bool bInIsSpecatatorLobby);
    
    UFUNCTION(BlueprintCallable)
    void SetRegionOverride(const FString& InRegionOverride);
    
    UFUNCTION(BlueprintCallable)
    void QueueWithLobby();
    
    UFUNCTION(BlueprintCallable)
    void QueueLobbyForDoubles();
    
    UFUNCTION(BlueprintCallable)
    void OssLogSessionInfo();
    
    UFUNCTION(BlueprintCallable)
    void Oss_UpdateSessionWithRegionOverride(const FString& InRegionOverride);
    
    UFUNCTION(BlueprintCallable)
    bool Oss_ShowNativeOssInviteUI();
    
    UFUNCTION(BlueprintCallable)
    void Oss_SearchSessions(const FString& searchKeyword);
    
    UFUNCTION(BlueprintCallable)
    void Oss_LeaveSession();
    
    UFUNCTION(BlueprintCallable)
    void Oss_JoinSession(int32 searchResultIndex);
    
    UFUNCTION(BlueprintCallable)
    bool Oss_IsHosting();
    
    UFUNCTION(BlueprintCallable)
    FString Oss_GetStringLobbyProperty(FName stringLobbyPropertyKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Oss_GetShouldTryJoiningAcceptedInvite() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> Oss_GetRegisteredPlayersIds();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> Oss_GetRegisteredPlayersIconFriendlyIds();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> Oss_GetRegisteredPlayersDisplayNames();
    
    UFUNCTION(BlueprintCallable)
    int32 Oss_GetRegisteredPlayersCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Oss_GetIsSearchingSessions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Oss_GetIsJoiningSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Oss_GetIsCreatingSession() const;
    
    UFUNCTION(BlueprintCallable)
    void Oss_CreateSession(int32 Size, bool bUseSearchKeyword, TEnumAsByte<RivalsLobbyType> RivalsLobbyType);
    
    UFUNCTION(BlueprintCallable)
    void JoinAcceptedInviteSession();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<RivalsLobbyType> GetRivalsLobbyType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRegionOverride();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ERivalsPlayFabLobbyAccessPolicy> GetLobbyAccessPolicy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URivalsLobbySubsystem* Get(const UObject* WorldContextObject);
    
};

