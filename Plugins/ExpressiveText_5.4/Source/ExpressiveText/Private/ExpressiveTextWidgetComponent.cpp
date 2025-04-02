#include "ExpressiveTextWidgetComponent.h"

UExpressiveTextWidgetComponent::UExpressiveTextWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEditTimeUsable = true;
    this->UserWidget = NULL;
}


