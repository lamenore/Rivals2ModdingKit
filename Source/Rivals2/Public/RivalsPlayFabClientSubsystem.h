#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ClaimCharacterArcadeRewardResponse.h"
#include "CloudScriptItemRedeemResponse.h"
#include "ConnectToPlayFabServicesErrorDelegate.h"
#include "ConnectToPlayFabServicesSuccessDelegate.h"
#include "InitialDataFetchingFinalStepFinishedDynamicMulticastDelegateDelegate.h"
#include "InitialDataFetchingFirstStepFinishedDynamicMulticastDelegateDelegate.h"
#include "PlayFabAddUsernamePasswordErrorDelegate.h"
#include "PlayFabAddUsernamePasswordSuccessDelegate.h"
#include "PlayFabLinkSteamAccountErrorDelegate.h"
#include "PlayFabLinkSteamAccountSuccessDelegate.h"
#include "PlayFabLoginWithEmailAddressBeforeSteamLinkingAttemptErrorDelegate.h"
#include "PlayFabLoginWithEmailAddressBeforeSteamLinkingAttemptSuccessDelegate.h"
#include "RivalsPlayFabSessionInfo.h"
#include "RivalsPlayFabClientSubsystem.generated.h"

class UObject;
class URivalsPlayFabClientSubsystem;

UCLASS(Blueprintable)
class RIVALS2_API URivalsPlayFabClientSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsPlayFabSessionInfo CurrentSessionInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayFabAddUsernamePasswordSuccess PlayFabAddUsernamePasswordSuccessDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayFabAddUsernamePasswordError PlayFabAddUsernamePasswordErrorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayFabLoginWithEmailAddressBeforeSteamLinkingAttemptSuccess PlayFabLoginWithEmailAddressBeforeSteamLinkingAttemptSuccessDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayFabLoginWithEmailAddressBeforeSteamLinkingAttemptError PlayFabLoginWithEmailAddressBeforeSteamLinkingAttemptErrorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayFabLinkSteamAccountSuccess PlayFabLinkSteamAccountSuccessDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayFabLinkSteamAccountError PlayFabLinkSteamAccountErrorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConnectToPlayFabServicesSuccess ConnectToPlayFabServicesSuccessDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConnectToPlayFabServicesError ConnectToPlayFabServicesErrorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInitialDataFetchingFirstStepFinishedDynamicMulticastDelegate OnInitialDataFetchingFirstStepFinishedDynamicMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInitialDataFetchingFinalStepFinishedDynamicMulticastDelegate OnInitialDataFetchingFinalStepFinishedDynamicMulticastDelegate;
    
    URivalsPlayFabClientSubsystem();

    UFUNCTION(BlueprintCallable)
    void PlayFabLoginWithEmailAddressBeforeSteamLinkingAttempt(const FString& EmailAddress, const FString& Password);
    
    UFUNCTION(BlueprintCallable)
    void PlayFabLinkSteamAccount();
    
    UFUNCTION(BlueprintCallable)
    void PlayFabAddUsernamePassword(const FString& EmailAddress, const FString& Password, const FString& Username);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRedeemEconomyV1CouponItemsInEconomyV2Finished(bool bWasSuccessful, const TArray<FCloudScriptItemRedeemResponse>& redeemedItems);
    
    UFUNCTION(BlueprintCallable)
    void OnGetPlayFabRankStatisticsFinished(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnGetEdgegapLocationsFinished(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnFetchUserInventoryFinished(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnFetchTitleDataComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnFetchPlayFabItemInfosComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnFetchPlayerDataComplete(bool bWasSuccessful, const FString& masterPlayerAccountId);
    
    UFUNCTION(BlueprintCallable)
    void OnFetchCharactersProgressionSettingsComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnClaimCharacterArcadeRewardsComplete(bool bWasSuccessful, FClaimCharacterArcadeRewardResponse ClaimCharacterArcadeRewardResponse);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkClientAsDisconnected();
    
    UFUNCTION(BlueprintCallable)
    void Logout();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoggedIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlayFabEmailAndSteamLink() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URivalsPlayFabClientSubsystem* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void DebugLogPlayerLocation();
    
    UFUNCTION(BlueprintCallable)
    void ConnectToPlayFabServices();
    
};

