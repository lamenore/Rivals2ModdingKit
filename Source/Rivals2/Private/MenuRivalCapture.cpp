#include "MenuRivalCapture.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneCaptureComponent2D.h"

AMenuRivalCapture::AMenuRivalCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
    this->CaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Capture Component"));
    this->RivalRenderer = NULL;
    this->PlatformRenderer = NULL;
    this->SkinDefinition = NULL;
    this->ColorSlotData = NULL;
    this->RivalCharDefinition = NULL;
    this->PostProcessMaterial = NULL;
    this->SkinToDisplay = NULL;
    this->ColorSlotToLoad = ERivalsColorSlot::None;
    this->RenderDataToLoad = NULL;
    this->CharacterPoseAnimation = NULL;
    this->CharacterAltPoseAnimation = NULL;
    this->CharacterPoseAnimPos = 0.00f;
    this->ShowAllMeshEffects = false;
    this->ShadingCurve = NULL;
    this->GlobalMaterialParameterCollection = NULL;
    this->ShadingCurveAtlas = NULL;
    this->FallbackStartFrame = 0;
    this->bLoopToFallback = true;
    this->bAltPoseAsFallback = false;
    this->FacingDirection = ERivalsFacingDirection::Left;
    this->bSpawnRespawnPlatform = false;
    this->UniversalSFX = NULL;
}

void AMenuRivalCapture::UpdateSkeletalMeshEffects() {
}

void AMenuRivalCapture::UpdateOutline() {
}

bool AMenuRivalCapture::UpdateLighting() {
    return false;
}

bool AMenuRivalCapture::UpdateCustomColors() {
    return false;
}

bool AMenuRivalCapture::SpawnVFX(const TSoftClassPtr<ARivalsVfxRenderer> VFXToSpawn) {
    return false;
}

bool AMenuRivalCapture::SpawnTestRival() {
    return false;
}

bool AMenuRivalCapture::SpawnSkeletalMeshEffects() {
    return false;
}

bool AMenuRivalCapture::SpawnRival(const URivalsCharacterSkinDefinition* SkinToSpawn, const ERivalsColorSlot ColorSlot, const bool& bForceCustomColors) {
    return false;
}

bool AMenuRivalCapture::SpawnRespawnPlatform(const TSoftClassPtr<ARespawnPlatformRenderer> PlatformToSpawn) {
    return false;
}

void AMenuRivalCapture::ResetRenderData() {
}

bool AMenuRivalCapture::PoseRival(UAnimSequence* Animation, float AnimPos) {
    return false;
}

void AMenuRivalCapture::PlayVFX(FRivalCaptureVFX VFX) {
}

void AMenuRivalCapture::PlayUniversalSFX(FName SFXName, int32 DurationFrames) {
}

void AMenuRivalCapture::PlayRivalSFX(FName SFXName, int32 DurationFrames) {
}

bool AMenuRivalCapture::LoadRenderData() {
    return false;
}

void AMenuRivalCapture::ClearVFXSpawns() {
}

void AMenuRivalCapture::ClearAllSpawns() {
}

void AMenuRivalCapture::Capture() {
}


