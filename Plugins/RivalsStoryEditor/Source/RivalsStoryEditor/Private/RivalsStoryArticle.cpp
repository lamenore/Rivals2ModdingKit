#include "RivalsStoryArticle.h"
#include "RivalsSkeletalMeshComponent.h"
#include "RivalsStoryArticleRenderer.h"

ARivalsStoryArticle::ARivalsStoryArticle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<URivalsSkeletalMeshComponent>(TEXT("ArticleMeshComponent"))) {
    this->RenderActor = NULL;
    this->RenderClass = ARivalsStoryArticleRenderer::StaticClass();
    this->ArticleMeshComponent->SetupAttachment(RootComponent);
}


