#include "RivalsCharacterRenderer.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "SnapNetEntityRendererComponent.h"
#include "Components/WidgetComponent.h"
#include "RivalsHurtboxRendererComponent.h"

ARivalsCharacterRenderer::ARivalsCharacterRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->CharacterMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMeshComponent"));
    this->OutlineMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("OutlineMeshComponent"));
    this->AuraMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AuraMeshComponent"));
    this->EntityRendererComponent = CreateDefaultSubobject<USnapNetEntityRendererComponent>(TEXT("SnapNetEntityRendererComponent"));
    this->OffscreenIndicatorComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("OffscreenIndicatorComponent"));
    this->OverheadHudComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("OverheadHudComponent"));
    this->AuraMaterialOverride = NULL;
    this->HitpauseYOffset = 0.00f;
    this->HurtboxRendererComponent = CreateDefaultSubobject<URivalsHurtboxRendererComponent>(TEXT("HurtboxRendererComponent"));
    this->LookaheadXOffset = 0.00f;
    this->RespawnPlatform = NULL;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->ShieldMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ShieldMeshComponent"));
    this->DetectVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("DetectVolume"));
    this->CharacterMeshComponentData.AddDefaulted(1);
    this->AuraMeshComponent->SetupAttachment(CharacterMeshComponent);
    this->CharacterMeshComponent->SetupAttachment(RootComponent);
    this->DetectVolume->SetupAttachment(RootComponent);
    this->OffscreenIndicatorComponent->SetupAttachment(RootComponent);
    this->OutlineMeshComponent->SetupAttachment(CharacterMeshComponent);
    this->OverheadHudComponent->SetupAttachment(RootComponent);
    this->ShieldMeshComponent->SetupAttachment(CharacterMeshComponent);
}

TArray<FName> ARivalsCharacterRenderer::GetMaterialSlotsInGroup(FName GroupName) const {
    return TArray<FName>();
}


