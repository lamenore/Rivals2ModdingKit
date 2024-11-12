#include "RivalsStoryPleaseCompile.h"
#include "Components/BillboardComponent.h"

ARivalsStoryPleaseCompile::ARivalsStoryPleaseCompile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EditorSprite = CreateDefaultSubobject<UBillboardComponent>(TEXT("RivalsBillboardComponent"));
    this->BehTreeComp = NULL;
    this->BlackboardComp = NULL;
    this->DialogTree = NULL;
    this->EditorSprite->SetupAttachment(RootComponent);
}


