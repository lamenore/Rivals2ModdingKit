#include "RivalsGameInstance.h"

URivalsGameInstance::URivalsGameInstance() {
    this->InPIE = false;
    this->UIManager = NULL;
    this->UIManagerClass = NULL;
    this->UserSettingsClass = NULL;
    this->bCameraLocked = false;
    this->DebugCameraMode = EDebugCameraMode::None;
    this->bSnapNetDebugging = false;
    this->DebuggingInfoMode = EDebuggingInfoMode::FullInfo;
    this->HudMode = EHudMode::ShowAll;
    this->InputDisplay = false;
    this->bPaused = false;
    this->bHoldToPause = false;
    this->bFrameAdvancing = false;
    this->bFreeCameraEnabled = false;
    this->bDollyCameraEnabled = false;
    this->bTargetBreak = false;
    this->bArcadeMode = false;
    this->bReplayMode = false;
    this->bStartLocalSessionAfterMapLoad = false;
    this->bStartDedicatedServerAfterMapLoad = false;
    this->bIsReconnecting = false;
    this->bTrainingMode = false;
    this->bUseDeterministicRandom = true;
    this->bIsSpectator = false;
    this->MvpVictorySequenceData = NULL;
    this->bPlayingResultsScreenAnimation = false;
    this->bWasMatchJustCancelled = false;
    this->bWasMatchJustForfeited = false;
    this->bDidLocalPlayerForfeit = false;
    this->PreviousSessionState = ERivalsSessionState::None;
    this->bStartedPIEinGameplayLevel = false;
    this->ReconnectMessage = NULL;
    this->bIsTransitioningMaps = false;
    this->bIsBreakTheTargets = false;
    this->ActiveCamera = NULL;
    this->CameraShakeClass = NULL;
    this->CharacterOutlinePostProcessMaterial = NULL;
    this->BlankKeyCapTexture = NULL;
    this->InvalidKeyTexture = NULL;
    this->GlobalMaterialParameterCollection = NULL;
    this->PostProcessMaterialParameterCollection = NULL;
    this->MenuSoundContainer = NULL;
    this->UniversalSfxContainer = NULL;
    this->UniversalVfxContainer = NULL;
    this->bInStoryMode = false;
    this->bFinishedLoadingGameplayAssets = false;
    this->bSimulateLastStock = false;
    this->bHasViewedStartupSequence = false;
    this->TapJumpDefault = false;
    this->TapStrongDefault = false;
    this->DeselectCharactersAfterMatch = false;
    this->ResetCustomControlsAfterMatch = false;
    this->MatchSettingsLocked = false;
    this->ForceAllowTeams = false;
    this->DisableTourneyMode = false;
    this->AllowFrameAdvance = false;
    this->AutoDetectMatchType = false;
    this->StockCount1v1 = 0;
    this->TimeSetting1v1 = 0;
    this->TimeSettingFFA = 0;
    this->DisableSecretRoom = false;
    this->DisableBattleRoom = false;
    this->ChaseIntensity = 0;
    this->UseOnlineColors = false;
    this->PausedPlayer = NULL;
    this->TargetArticleData = NULL;
    this->MovingTargetArticleData = NULL;
    this->ShowBuildType = EShowBuildType::None;
    this->VersionString = TEXT("Editor - No Version String Assigned");
}

void URivalsGameInstance::WaitForShaderCompilation() const {
}

void URivalsGameInstance::ToggleSnapNetDebugging() {
}

void URivalsGameInstance::TogglePaused() {
}

void URivalsGameInstance::ToggleFrameAdvance(bool bIsFrameAdvance) {
}

void URivalsGameInstance::ToggleDebugDrawing() {
}

void URivalsGameInstance::ToggleCameraLocked() {
}

void URivalsGameInstance::StartLocalSession(TSoftObjectPtr<UWorld> Map) {
}

void URivalsGameInstance::StartGameplayMapLoad(const FName& LevelName, bool bIsServer) {
}

void URivalsGameInstance::SpawnBot() {
}

bool URivalsGameInstance::ShouldDrawTeamOutlines() const {
    return false;
}

void URivalsGameInstance::ShakeCamera(const int32& GameplayFrame, const float& IntensityScale, const float& ShakeDuration, const float& FadeInPercentage, const float& FadeOutPercentage) {
}

bool URivalsGameInstance::SetPlayerTag(const FString& PlayerTagName, const int32& PlayerIndex, bool ForceSetToDefaultTag) {
    return false;
}

void URivalsGameInstance::SetPaused(const bool Enabled) {
}

void URivalsGameInstance::SetNextGreenScreenType(EGreenScreenType OverrideType) {
}

void URivalsGameInstance::SetIsReconnecting(bool bInIsReconnecting) {
}

void URivalsGameInstance::SetInputDisplay(bool Enabled) {
}

void URivalsGameInstance::SetHudMode(EHudMode InMode) {
}

void URivalsGameInstance::SetHoldToPause(const bool& Enabled) {
}

void URivalsGameInstance::SetFreeCamera(bool FreeCameraEnabled) {
}

void URivalsGameInstance::SetDollyCamera(bool DollyCameraEnabled) {
}

void URivalsGameInstance::SetDeterministicRandom(const bool Enabled) {
}

void URivalsGameInstance::SetDebuggingInfoMode(EDebuggingInfoMode InMode) {
}

void URivalsGameInstance::SetDebugDrawStageCollision(bool StageCollisionEnabled) {
}

void URivalsGameInstance::SetDebugDrawHitboxes(bool HitboxesEnabled) {
}

void URivalsGameInstance::SetDebugDrawDi(bool DiLinesEnabled) {
}

void URivalsGameInstance::SetDebugCameraMode(EDebugCameraMode InMode) {
}

void URivalsGameInstance::SetCameraLocked(bool LockCamera) {
}

void URivalsGameInstance::SendReadyToStartMatchMessage() {
}

bool URivalsGameInstance::SaveState(const int32 SaveStateIndex) {
    return false;
}

bool URivalsGameInstance::SavePlayerTagWithSlotIndex(const int32& PlayerIndex) {
    return false;
}

bool URivalsGameInstance::SavePlayerTags() const {
    return false;
}

bool URivalsGameInstance::SavePlayerTag(const FString& PlayerTagName) const {
    return false;
}

void URivalsGameInstance::RumbleController(const int32& PlayerIndex, const float& Intensity, const float& Duration) const {
}

void URivalsGameInstance::RestartMatch() {
}

void URivalsGameInstance::ReassignControllerPort(const int32& OldPortNum, const int32& NewPortNum) {
}

void URivalsGameInstance::PlayUniversalSFX(const FName& SoundName) const {
}

void URivalsGameInstance::PlayReplayFromFile(const FString& Filename) {
}

FFMODEventInstance URivalsGameInstance::PlayMenuSoundWithHandle(EMenuSoundType MenuSoundType) {
    return FFMODEventInstance{};
}

void URivalsGameInstance::PlayMenuSound(EMenuSoundType MenuSoundType, int32 FramePriority) const {
}

void URivalsGameInstance::PlayCharSfx(const FName& SoundName, const URivalsCharacterDefinition* SkinDefinition) const {
}

void URivalsGameInstance::OnResultsAnimationFinished() {
}

void URivalsGameInstance::OnLeaveCSSToMainMenu() {
}

void URivalsGameInstance::OnAcceptedInvite() {
}

bool URivalsGameInstance::LoadState(const int32 SaveStateIndex) {
    return false;
}

void URivalsGameInstance::LaunchDedicatedServer(TSoftObjectPtr<UWorld> Map) {
}

bool URivalsGameInstance::IsUsingTrailerCamera() const {
    return false;
}

bool URivalsGameInstance::IsUsingDeterministicRandom() const {
    return false;
}

bool URivalsGameInstance::IsTrainingMode() const {
    return false;
}

bool URivalsGameInstance::IsTargetBreak() const {
    return false;
}

bool URivalsGameInstance::IsSpectator() {
    return false;
}

bool URivalsGameInstance::IsSnapNetDebugging() const {
    return false;
}

bool URivalsGameInstance::IsSinglePlayerMode() const {
    return false;
}

bool URivalsGameInstance::IsShowBuild() const {
    return false;
}

bool URivalsGameInstance::IsSessionActive() const {
    return false;
}

bool URivalsGameInstance::IsReplayMode() const {
    return false;
}

bool URivalsGameInstance::IsReconnecting() const {
    return false;
}

bool URivalsGameInstance::IsRankedSession() const {
    return false;
}

bool URivalsGameInstance::IsPlayerTagInUse(const FString& PlayerTagName) const {
    return false;
}

bool URivalsGameInstance::IsPaused() const {
    return false;
}

bool URivalsGameInstance::IsOnMainPauseMenu() const {
    return false;
}

bool URivalsGameInstance::IsOnlineSession() {
    return false;
}

bool URivalsGameInstance::IsLoggedIn() const {
    return false;
}

bool URivalsGameInstance::IsLocalSession() const {
    return false;
}

bool URivalsGameInstance::IsLocalPlayer(const int32& PlayerIndex) const {
    return false;
}

bool URivalsGameInstance::IsHoldToPauseEnabled() const {
    return false;
}

bool URivalsGameInstance::IsFreeCameraEnabled() const {
    return false;
}

bool URivalsGameInstance::IsFrameAdvanceEnabled() const {
    return false;
}

bool URivalsGameInstance::IsFrameAdvanceAllowed() const {
    return false;
}

bool URivalsGameInstance::IsDollyCameraEnabled() const {
    return false;
}

bool URivalsGameInstance::IsCameraLocked() const {
    return false;
}

bool URivalsGameInstance::IsArcadeMode() const {
    return false;
}

void URivalsGameInstance::InitResultsScreen() {
}

URivalsUIManager* URivalsGameInstance::GetUIManager() const {
    return NULL;
}

ERivalsSessionState URivalsGameInstance::GetSessionState() const {
    return ERivalsSessionState::None;
}

ESnapNetRenderInterpolationMethod URivalsGameInstance::GetRenderInterpolationMethod() const {
    return ESnapNetRenderInterpolationMethod::PartialTick;
}

TArray<FRivalsPlayerTag> URivalsGameInstance::GetNonTempPlayerTags() const {
    return TArray<FRivalsPlayerTag>();
}

URivalsVictorySequenceData* URivalsGameInstance::GetMvpVictorySequenceData() const {
    return NULL;
}

int32 URivalsGameInstance::GetMaxPredictionFrames() const {
    return 0;
}

int32 URivalsGameInstance::GetMaxDelayFramesBeforePrediction() const {
    return 0;
}

bool URivalsGameInstance::GetInputDisplay() const {
    return false;
}

EHudMode URivalsGameInstance::GetHudMode() const {
    return EHudMode::ShowAll;
}

EDebuggingInfoMode URivalsGameInstance::GetDebuggingInfoMode() const {
    return EDebuggingInfoMode::None;
}

EDebugCameraMode URivalsGameInstance::GetDebugCameraMode() const {
    return EDebugCameraMode::None;
}

FString URivalsGameInstance::GetCurrentPlayerTagString(const int32& PlayerIndex) {
    return TEXT("");
}

FString URivalsGameInstance::GetCurrentGreenScreenTypeString() {
    return TEXT("");
}

TArray<FString> URivalsGameInstance::GetAllReplayFilenames() const {
    return TArray<FString>();
}

int32 URivalsGameInstance::GetAdditionalJitterBufferFrames() const {
    return 0;
}

void URivalsGameInstance::ExecOssLogSessionInfo() {
}

void URivalsGameInstance::EndSessionDirect(TSoftObjectPtr<UWorld> Map) {
}

void URivalsGameInstance::EndSession(TSoftObjectPtr<UWorld> Map, TSoftClassPtr<UBasePopupWidget> NextDialogueToOpen) {
}

bool URivalsGameInstance::DeleteTag(const FString& PlayerTagName) {
    return false;
}

void URivalsGameInstance::DeleteReplay(const FString& ReplayName) const {
}

void URivalsGameInstance::ContinueLocalSession(TSoftObjectPtr<UWorld> Map) {
}

bool URivalsGameInstance::CanPause() const {
    return false;
}

void URivalsGameInstance::AdvanceFrame() {
}

bool URivalsGameInstance::AddPlayerTag(const FString& PlayerTagName) {
    return false;
}


