#include "RivalsDollyCamera.h"

URivalsDollyCamera::URivalsDollyCamera() {
    this->RivalsCamera = NULL;
    this->MarkerPopup = NULL;
    this->SceneCapture = NULL;
    this->FollowCameraActor = NULL;
    this->KeyframeManager = NULL;
    this->PreviousKeyframe = NULL;
    this->EditMode = Firstperson;
    this->CameraMode = Regular;
    this->bModifier = false;
    this->bInMenu = false;
    this->CurrentKeyframe = NULL;
    this->StoredKeyframe = NULL;
    this->TempKeyframe = NULL;
    this->bEditing = false;
    this->bFocusOnPoint = false;
    this->bFollowingPath = false;
    this->bShowCameraPath = true;
    this->bRendering = false;
    this->bTargetSet = false;
}

void URivalsDollyCamera::ToggleModifier() {
}

void URivalsDollyCamera::ToggleFollowRail() {
}

void URivalsDollyCamera::ToggleEditMode() {
}

void URivalsDollyCamera::ToggleEditing() {
}

void URivalsDollyCamera::StartCameraFollow() {
}

void URivalsDollyCamera::SpawnFollowCamera() {
}

void URivalsDollyCamera::ShowCameraPreview() {
}

void URivalsDollyCamera::SetTarget(bool IsTargeted) {
}

void URivalsDollyCamera::SetRoll(float Roll) {
}

void URivalsDollyCamera::SetRendering(bool NewIsRendering) {
}

void URivalsDollyCamera::SetModifier(bool IsActive) {
}

void URivalsDollyCamera::SetInMenu(bool IsInMenu) {
}

void URivalsDollyCamera::SetFOV(float FOV) {
}

void URivalsDollyCamera::SetFollowRail(bool NewIsFollowing) {
}

void URivalsDollyCamera::SetFocus(UKeyframe* Keyframe) {
}

void URivalsDollyCamera::SetEditMode(TEnumAsByte<Rivals2_CameraEditMode> NewEditMode) {
}

void URivalsDollyCamera::SetEditing(bool NewIsEditing) {
}

void URivalsDollyCamera::SetCameraMode(TEnumAsByte<Rivals2_CameraMode> Mode) {
}

void URivalsDollyCamera::SeekToKeyframe(UKeyframe* Keyframe) {
}

void URivalsDollyCamera::SaveKeyframe() {
}

void URivalsDollyCamera::RollTick() {
}

void URivalsDollyCamera::ResetCameraOrientation() {
}

void URivalsDollyCamera::RemoveFocus() {
}

void URivalsDollyCamera::PlaySequence() {
}

void URivalsDollyCamera::ManipulateSpline(float DeltaTime) {
}

bool URivalsDollyCamera::IsTargetSet() {
    return false;
}

bool URivalsDollyCamera::IsRendering() {
    return false;
}

bool URivalsDollyCamera::IsModifierActive() {
    return false;
}

bool URivalsDollyCamera::IsFollowing() {
    return false;
}

bool URivalsDollyCamera::IsFocusing() {
    return false;
}

bool URivalsDollyCamera::IsEditing() {
    return false;
}

void URivalsDollyCamera::InterpolateCamera(float DeltaTime) {
}

void URivalsDollyCamera::HideCameraPreview() {
}

void URivalsDollyCamera::HandleKeyframe() {
}

int32 URivalsDollyCamera::GetKeyframeIndexFromTick(int32 Tick) {
    return 0;
}

TEnumAsByte<Rivals2_CameraEditMode> URivalsDollyCamera::GetEditMode() {
    return Firstperson;
}

UKeyframe* URivalsDollyCamera::GetCurrentKeyframe() {
    return NULL;
}

TEnumAsByte<Rivals2_CameraMode> URivalsDollyCamera::GetCameraMode() {
    return Regular;
}

void URivalsDollyCamera::FOVTick() {
}

void URivalsDollyCamera::FollowCameraPath(float DeltaTime) {
}

void URivalsDollyCamera::FocusPreviousKeyframe() {
}

void URivalsDollyCamera::FocusNextKeyframe() {
}

void URivalsDollyCamera::ExitCameraFollow() {
}

void URivalsDollyCamera::EditThirdpersonTick(float DeltaTime) {
}

void URivalsDollyCamera::EditFirstpersonTick(float DeltaTime) {
}

void URivalsDollyCamera::DrawCampathVisuals() {
}

void URivalsDollyCamera::DrawCameraPath() {
}

void URivalsDollyCamera::DrawCameraMarker(UKeyframe* Keyframe, bool Selected) {
}

void URivalsDollyCamera::DeleteKeyframe() {
}

void URivalsDollyCamera::CreateRenderTarget() {
}

UKeyframe* URivalsDollyCamera::CanEditKeyframe() {
    return NULL;
}

void URivalsDollyCamera::CancelEdit() {
}

bool URivalsDollyCamera::CanAddKeyframe() {
    return false;
}

bool URivalsDollyCamera::CameraSequenceExists() {
    return false;
}

UKeyframe* URivalsDollyCamera::AddKeyframe() {
    return NULL;
}


