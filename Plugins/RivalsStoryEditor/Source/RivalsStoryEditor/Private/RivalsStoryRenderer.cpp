#include "RivalsStoryRenderer.h"
#include "Components/SceneComponent.h"
#include "SnapNetEntityRendererComponent.h"

ARivalsStoryRenderer::ARivalsStoryRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("StoryRendererRoot"));
    this->EntityRendererComponent = CreateDefaultSubobject<USnapNetEntityRendererComponent>(TEXT("SnapNetRendererComponent"));
}


