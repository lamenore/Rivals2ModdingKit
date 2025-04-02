#include "ExpressiveTextActor.h"
#include "ExpressiveTextComponent.h"

AExpressiveTextActor::AExpressiveTextActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExpressiveTextComponent = CreateDefaultSubobject<UExpressiveTextComponent>(TEXT("ExpressiveTextComponent"));
}


