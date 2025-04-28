#include "RivalsPlayFabClientSubsystem.h"

URivalsPlayFabClientSubsystem::URivalsPlayFabClientSubsystem() {
}

void URivalsPlayFabClientSubsystem::PlayFabLoginWithEmailAddressBeforeSteamLinkingAttempt(const FString& EmailAddress, const FString& Password) {
}

void URivalsPlayFabClientSubsystem::PlayFabLinkSteamAccount() {
}

void URivalsPlayFabClientSubsystem::PlayFabAddUsernamePassword(const FString& EmailAddress, const FString& Password, const FString& Username) {
}

void URivalsPlayFabClientSubsystem::OnRedeemEconomyV1CouponItemsInEconomyV2Finished(bool bWasSuccessful, const TArray<FCloudScriptItemRedeemResponse>& redeemedItems) {
}

void URivalsPlayFabClientSubsystem::OnGetPlayFabRankStatisticsFinished(bool bWasSuccessful) {
}

void URivalsPlayFabClientSubsystem::OnGetEdgegapLocationsFinished(bool bWasSuccessful) {
}

void URivalsPlayFabClientSubsystem::OnFetchUserInventoryFinished(bool bWasSuccessful) {
}

void URivalsPlayFabClientSubsystem::OnFetchTitleDataComplete(bool bWasSuccessful) {
}

void URivalsPlayFabClientSubsystem::OnFetchPlayFabItemInfosComplete(bool bWasSuccessful) {
}

void URivalsPlayFabClientSubsystem::OnFetchPlayerDataComplete(bool bWasSuccessful, const FString& masterPlayerAccountId) {
}

void URivalsPlayFabClientSubsystem::OnFetchCharactersProgressionSettingsComplete(bool bWasSuccessful) {
}

void URivalsPlayFabClientSubsystem::OnClaimCharacterArcadeRewardsComplete(bool bWasSuccessful, FClaimCharacterArcadeRewardResponse ClaimCharacterArcadeRewardResponse) {
}

void URivalsPlayFabClientSubsystem::MarkClientAsDisconnected() {
}

void URivalsPlayFabClientSubsystem::Logout() {
}

bool URivalsPlayFabClientSubsystem::IsLoggedIn() const {
    return false;
}

bool URivalsPlayFabClientSubsystem::HasPlayFabEmailAndSteamLink() const {
    return false;
}

URivalsPlayFabClientSubsystem* URivalsPlayFabClientSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

void URivalsPlayFabClientSubsystem::DebugLogPlayerLocation() {
}

void URivalsPlayFabClientSubsystem::ConnectToPlayFabServices() {
}


