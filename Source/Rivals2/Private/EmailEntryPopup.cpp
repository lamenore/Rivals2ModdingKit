#include "EmailEntryPopup.h"

UEmailEntryPopup::UEmailEntryPopup() {
    this->BP_TabSwitcher = NULL;
    this->BP_ErrorPanel = NULL;
    this->BP_ErrorTextBlock = NULL;
    this->BP_SwitchTabAnim = NULL;
    this->BP_PickLinkButton = NULL;
    this->BP_PickCreateButton = NULL;
    this->BP_PickCloseButton = NULL;
    this->BP_LinkEmailField = NULL;
    this->BP_LinkPasswordField = NULL;
    this->BP_LinkLoginButton = NULL;
    this->BP_LinkForgotButton = NULL;
    this->BP_LinkBackButton = NULL;
    this->BP_CreateUsernameField = NULL;
    this->BP_CreateEmailField = NULL;
    this->BP_CreateConfirmEmailField = NULL;
    this->BP_CreatePasswordField = NULL;
    this->BP_CreateConfirmPasswordField = NULL;
    this->BP_CreateCreateButton = NULL;
    this->BP_CreateBackToLoginButton = NULL;
    this->BP_RecoverEmailField = NULL;
    this->BP_RecoverSendButton = NULL;
    this->BP_RecoverBackToLoginButton = NULL;
    this->BP_ConfirmLinkAccountButton = NULL;
    this->BP_BackLinkAccountButton = NULL;
    this->BP_ConnectingToPlayFabServicesCloseButton = NULL;
    this->BP_ConnectingToPlayFabServicesConnectingTextBox = NULL;
    this->BP_ConnectingToPlayFabServicesFailedTextBox = NULL;
}

void UEmailEntryPopup::OnRecoveryEmailSent(FClientSendAccountRecoveryEmailResult Result, UObject* customData) {
}

void UEmailEntryPopup::OnRecoveryEmailSendFailed(FPlayFabError Result, UObject* customData) {
}

void UEmailEntryPopup::OnRecoverSendClicked() {
}

void UEmailEntryPopup::OnRecoverBackToLoginClicked() {
}

void UEmailEntryPopup::OnPickLinkClicked() {
}

void UEmailEntryPopup::OnPickCreateClicked() {
}

void UEmailEntryPopup::OnPickBackClicked() {
}

void UEmailEntryPopup::OnLoginWithEmailBeforeSteamLinkSuccess(bool bAlreadyHasSteamAccountLink) {
}

void UEmailEntryPopup::OnLoginWithEmailBeforeSteamLinkError(FText ErrorReport) {
}

void UEmailEntryPopup::OnLinkSteamAccountSuccess() {
}

void UEmailEntryPopup::OnLinkSteamAccountError(FText ErrorReport) {
}

void UEmailEntryPopup::OnLinkLoginClicked() {
}

void UEmailEntryPopup::OnLinkForgotPasswordClicked() {
}

void UEmailEntryPopup::OnLinkCreateAccountClicked() {
}

void UEmailEntryPopup::OnLinkBackClicked() {
}

void UEmailEntryPopup::OnCreateCreateAccountClicked() {
}

void UEmailEntryPopup::OnCreateBackToLoginClicked() {
}

void UEmailEntryPopup::OnConnectToPlayFabServicesSuccess() {
}

void UEmailEntryPopup::OnConnectToPlayFabServicesError(FText ErrorReport) {
}

void UEmailEntryPopup::OnConnectingToPlayFabServicesCloseButtonClicked() {
}

void UEmailEntryPopup::OnConfirmLinkAccountClicked() {
}

void UEmailEntryPopup::OnAddUsernamePasswordSuccess() {
}

void UEmailEntryPopup::OnAddUsernamePasswordError(FText ErrorReport) {
}


