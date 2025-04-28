#include "CharacterSelectScreenWidget.h"

UCharacterSelectScreenWidget::UCharacterSelectScreenWidget() {
    this->WBP_CSSCharacterButton = NULL;
    this->WBP_CSSHack = NULL;
    this->BP_CSSButtonRow_UpperRow = NULL;
    this->BP_CSSButtonRow_LowerRow = NULL;
    this->BP_CursorInterface = NULL;
    this->BP_BotMatchDetails = NULL;
    this->GameSettingsWidget = NULL;
    this->bIsInitialized = false;
    this->BP_CssPlayerSlotWidget0 = NULL;
    this->BP_CssPlayerSlotWidget1 = NULL;
    this->BP_CssPlayerSlotWidget2 = NULL;
    this->BP_CssPlayerSlotWidget3 = NULL;
    this->BP_OnHoldVisualContainer = NULL;
    this->BP_BackProgressBar = NULL;
    this->BP_OnlineStateTimer = NULL;
    this->MaxBackPressTime = 0.75f;
    this->MinBackPressTime = 0.16f;
}

void UCharacterSelectScreenWidget::UnhoverCharacterBox(const int32& PlayerSlot, TSoftClassPtr<URivalsCharacterDefinition> InCharacterDefinition) {
}

bool UCharacterSelectScreenWidget::ToggleTourneyMode() {
    return false;
}

void UCharacterSelectScreenWidget::ToggleTeamAttackSetting() {
}

void UCharacterSelectScreenWidget::ToggleTapWalljump(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::ToggleTapStrong(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::ToggleTapJump(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::ToggleRumble(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::ToggleRandomizeTeams() {
}

void UCharacterSelectScreenWidget::ToggleDpadMovement(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::ToggleDoubleTapDash(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::ToggleAutoWalk(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::ToggleAutoShorthopAerial(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::SetWinsRequired(const int32 InWinsRequired) {
}

void UCharacterSelectScreenWidget::SetRightStickThreshold(const int32& PlayerSlot, float InValue) {
}

void UCharacterSelectScreenWidget::SetRightStickSetting(const int32& PlayerSlot, const ERivalsRightStickSetting& RstickSetting) {
}

bool UCharacterSelectScreenWidget::SetPlayerTag(const FString& PlayerTagName, const int32& PlayerIndex) {
    return false;
}

void UCharacterSelectScreenWidget::SetPlayerCpu(const int32& PlayerSlot, const FString& Character) {
}

void UCharacterSelectScreenWidget::SetMatchTimeSetting(int32 TimeInMinutes) {
}

void UCharacterSelectScreenWidget::SetMatchTeamsSetting(bool bInTeamEnabled) {
}

void UCharacterSelectScreenWidget::SetMatchStockSetting(int32 StockCount) {
}

void UCharacterSelectScreenWidget::SetMatchStockAndTime(int32 StockCount, int32 TimeInMinutes) {
}

void UCharacterSelectScreenWidget::SetJoystickSensitivityMultiplier(const int32& PlayerSlot, float InValue) {
}

void UCharacterSelectScreenWidget::SetJoystickDeadzoneMultiplier(const int32& PlayerSlot, float InValue) {
}

bool UCharacterSelectScreenWidget::SetHoverColorSlot(const int32& PlayerSlot, ERivalsColorSlot ColorSlot) {
    return false;
}

void UCharacterSelectScreenWidget::SetHardPressThreshold(const int32& PlayerSlot, float InValue) {
}

void UCharacterSelectScreenWidget::SetDifficultySetting(ERivalsArcadeModeDifficultySetting DifficultySetting) {
}

void UCharacterSelectScreenWidget::SetCpuLevel(const int32& PlayerSlot, const int32& CpuLevel) {
}

void UCharacterSelectScreenWidget::SetAirParrySetting(const int32& PlayerSlot, const ERivalsAirGrabParrySetting& Setting) {
}

void UCharacterSelectScreenWidget::SetAirGrabSetting(const int32& PlayerSlot, const ERivalsAirGrabParrySetting& Setting) {
}

void UCharacterSelectScreenWidget::SelectPreviousSkin(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::SelectPreviousColorSlot(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::SelectNextSkin(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::SelectNextColorSlot(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::SelectHoveredCharacter(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::SelectCharacter(const int32& PlayerSlot, TSoftClassPtr<URivalsCharacterDefinition> InCharacterDefinition, TSoftClassPtr<URivalsCharacterSkinDefinition> InSkinDefinition, ERivalsColorSlot ColorSlot) {
}

void UCharacterSelectScreenWidget::ReturnToMainMenu(bool ReturnedFromHeldBackAction) {
}

void UCharacterSelectScreenWidget::ResetPlayerSettings(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::RequestStartMatch(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::RequestForfeit() {
}

void UCharacterSelectScreenWidget::RemovePlayer(const int32& ThisPlayerSlot, const int32& TargetPlayerSlot) {
}

void UCharacterSelectScreenWidget::OpenTempGameSettings(const int32 OpeningPlayerIndex) {
}

void UCharacterSelectScreenWidget::OpenRemappingMenu(const int32& PlayerSlot, const FName& ActionName) {
}

void UCharacterSelectScreenWidget::OpenPlayerStyles(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::OpenPlayerSettings(const int32& PlayerSlot) {
}


void UCharacterSelectScreenWidget::OnInitSessionState(const ERivalsSessionState SessionState) {
}

void UCharacterSelectScreenWidget::MarkPlayerReady(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::MarkPlayerNotReady(const int32& PlayerSlot) {
}

bool UCharacterSelectScreenWidget::IsPopupOpen() const {
    return false;
}

bool UCharacterSelectScreenWidget::IsPlayerUsingDefaultControls(const int32& PlayerSlot) {
    return false;
}

bool UCharacterSelectScreenWidget::IsPlayerReady(const int32& PlayerSlot) const {
    return false;
}

bool UCharacterSelectScreenWidget::IsPlayerCpu(const int32& PlayerSlot) const {
    return false;
}

bool UCharacterSelectScreenWidget::IsPlayerActive(const int32& PlayerSlot) const {
    return false;
}

bool UCharacterSelectScreenWidget::IsOnlineMatch() const {
    return false;
}

bool UCharacterSelectScreenWidget::IsLobbyMatch() const {
    return false;
}

bool UCharacterSelectScreenWidget::IsEveryoneReady() const {
    return false;
}

bool UCharacterSelectScreenWidget::IsColorSlotAvailable(const int32& PlayerSlot, TSoftClassPtr<URivalsCharacterDefinition> InCharacterDefinition, TSoftClassPtr<URivalsCharacterSkinDefinition> InSkinDefinition, ERivalsColorSlot ColorSlot) const {
    return false;
}

bool UCharacterSelectScreenWidget::IsBotMatchMode() const {
    return false;
}


void UCharacterSelectScreenWidget::IncrementWinsRequired() {
}

void UCharacterSelectScreenWidget::IncreaseCpuLevel(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::HoverOverCharacterBox(const int32& PlayerSlot, TSoftClassPtr<URivalsCharacterDefinition> InCharacterDefinition) {
}

bool UCharacterSelectScreenWidget::HasCharacterSelected(const int32& PlayerSlot) const {
    return false;
}

int32 UCharacterSelectScreenWidget::GetWinsRequired() const {
    return 0;
}

int32 UCharacterSelectScreenWidget::GetWinCountForPlayer(const int32& PlayerSlot) const {
    return 0;
}

void UCharacterSelectScreenWidget::GetTempMappingsForActionOrAxis(const int32& PlayerSlot, const FName& Name, bool& IsAction, TArray<FInputActionKeyMapping>& OutActionKeyMap, TArray<FInputAxisKeyMapping>& OutAxisKeyMap) {
}

ERivalsColorSlot UCharacterSelectScreenWidget::GetPlayerTeam(const int32& PlayerSlot) const {
    return ERivalsColorSlot::None;
}

int32 UCharacterSelectScreenWidget::GetPlayerSlotForPlayerController(APlayerController* InController) {
    return 0;
}

FText UCharacterSelectScreenWidget::GetPlayerName(const int32& PlayerSlot) const {
    return FText::GetEmpty();
}

ARivalsPlayerController* UCharacterSelectScreenWidget::GetPlayerControllerForSlot(const int32& PlayerSlot) {
    return NULL;
}

FCharacterSelectPlayerBoxInfo UCharacterSelectScreenWidget::GetPlayerCharacterInfo(const int32& PlayerSlot) const {
    return FCharacterSelectPlayerBoxInfo{};
}

FMatchSettingsInfo UCharacterSelectScreenWidget::GetMatchSettingsInfo() {
    return FMatchSettingsInfo{};
}

void UCharacterSelectScreenWidget::GetCustomMappingsForActionOrAxis(const int32& PlayerSlot, const FName& Name, bool& IsAction, TArray<FInputActionKeyMapping>& OutActionKeyMap, TArray<FInputAxisKeyMapping>& OutAxisKeyMap) {
}

FRivalsPlayerTag UCharacterSelectScreenWidget::GetCurrentPlayerTagInfo(const int32& PlayerSlot) {
    return FRivalsPlayerTag{};
}

int32 UCharacterSelectScreenWidget::GetCpuLevel(const int32& PlayerSlot) const {
    return 0;
}

void UCharacterSelectScreenWidget::DeselectCharacter(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::DecrementWinsRequired() {
}

void UCharacterSelectScreenWidget::DecreaseCpuLevel(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::CloseTempGameSettings() {
}

void UCharacterSelectScreenWidget::CloseRemappingMenu(const int32& PlayerSlot, const bool& AcceptChanges) {
}

void UCharacterSelectScreenWidget::ClosePlayerStyles(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::ClosePlayerSettings(const int32& PlayerSlot) {
}

void UCharacterSelectScreenWidget::ClearCustomMappingsForActionOrAxis(const int32& PlayerSlot, const FName& Name) {
}

void UCharacterSelectScreenWidget::ChangeTeam(const int32& ThisPlayerSlot, const int32& TargetPlayerSlot) {
}

void UCharacterSelectScreenWidget::ChangeSkin(const int32& PlayerSlot, const ECharacterSelectPlayerState InState, TSoftClassPtr<URivalsCharacterSkinDefinition> InSkinDefinition, ERivalsColorSlot ColorSlot) {
}

void UCharacterSelectScreenWidget::AddPlayer(const int32& PlayerSlot) {
}


