#include "RivalsArticleRenderer.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "SnapNetEntityRendererComponent.h"
#include "Components/WidgetComponent.h"
#include "RivalsHurtboxRendererComponent.h"

ARivalsArticleRenderer::ARivalsArticleRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->StateBasedSoundInstances.AddDefaulted(32);
    this->ArticleMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMeshComponent"));
    this->ArticleOutlineMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ArticleOutlineMeshComponent"));
    this->EntityRendererComponent = CreateDefaultSubobject<USnapNetEntityRendererComponent>(TEXT("SnapNetEntityRendererComponent"));
    this->HurtboxRendererComponent = CreateDefaultSubobject<URivalsHurtboxRendererComponent>(TEXT("HurtboxRendererComponent"));
    this->OffscreenIndicatorComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("OffscreenIndicatorComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->bHasOutline = true;
    this->ArticleMeshComponent->SetupAttachment(RootComponent);
    this->ArticleOutlineMeshComponent->SetupAttachment(ArticleMeshComponent);
    this->OffscreenIndicatorComponent->SetupAttachment(RootComponent);
}


