#include "RivalsStoryEntity.h"
#include "SnapNetEntityComponent.h"
#include "RivalsStoryRenderer.h"
#include "RivalsStorySceneComponent.h"

ARivalsStoryEntity::ARivalsStoryEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<URivalsStorySceneComponent>(TEXT("StoryEntityRoot"));
    this->RenderActor = NULL;
    this->entityComponent = CreateDefaultSubobject<USnapNetEntityComponent>(TEXT("SnapNetEntityComponent"));
    this->RenderClass = ARivalsStoryRenderer::StaticClass();
}

void ARivalsStoryEntity::GameplayTick() {
}


