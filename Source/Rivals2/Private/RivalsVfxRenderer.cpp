#include "RivalsVfxRenderer.h"
#include "Components/SceneComponent.h"
#include "SnapNetEntityRendererComponent.h"

ARivalsVfxRenderer::ARivalsVfxRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->DirectionalComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DirectionalComponent"));
    this->EntityRendererComponent = CreateDefaultSubobject<USnapNetEntityRendererComponent>(TEXT("EntityRendererComponent"));
    this->EmittersActive = true;
    this->LastRenderedFacingDirection = 0;
    this->PreviewTimeScale = 1.00f;
    this->PreviewTimeline = 0.00f;
    this->RecolorType = EVfxRecolorType::None;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->DirectionalComponent->SetupAttachment(RootComponent);
}


