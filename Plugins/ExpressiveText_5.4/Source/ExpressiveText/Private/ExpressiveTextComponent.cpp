#include "ExpressiveTextComponent.h"

UExpressiveTextComponent::UExpressiveTextComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetComponent = NULL;
    this->Space = EWidgetSpace::World;
    this->LightMode = EExpressiveTextLightMode::Lit;
    this->EmissiveIntensity = 1.00f;
    this->TimingPolicy = EWidgetTimingPolicy::RealTime;
    this->ShouldRenderWhenOffscren = false;
    this->CastShadow = true;
    this->LightModeMaterialsAsset = NULL;
}

void UExpressiveTextComponent::SkipReveal() const {
}

void UExpressiveTextComponent::SetTextVisibility(bool Value) {
}

void UExpressiveTextComponent::SetTextHiddenInGame(bool Value) {
}

void UExpressiveTextComponent::SetCastShadows(bool Value) {
}

UExpressiveTextWidgetComponent* UExpressiveTextComponent::GetWidgetComponent() const {
    return NULL;
}

UTextureRenderTarget2D* UExpressiveTextComponent::GetRenderTarget() const {
    return NULL;
}

void UExpressiveTextComponent::GetChronos(FExpressiveTextChronos& OutChronos) const {
}


