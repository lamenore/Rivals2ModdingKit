#include "ScaleShapeBase.h"
#include "Components/SlateWrapperTypes.h"

UScaleShapeBase::UScaleShapeBase() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->bIsSolid = true;
    this->bIsFaded = false;
    this->bIsShadowEnabled = false;
    this->Smoothness = 0.00f;
    this->Thickness = 1.00f;
    this->SpreadRadius = 2.00f;
    this->BlurRadius = 2.00f;
}

void UScaleShapeBase::SetThickness(float InThickness) {
}

void UScaleShapeBase::SetSpreadRadius(float InSpreadRadius) {
}

void UScaleShapeBase::SetSmoothness(float InSmoothness) {
}

void UScaleShapeBase::SetShadowOffset(FVector2D InShadowOffset) {
}

void UScaleShapeBase::SetShadowColor(FLinearColor InColor) {
}

void UScaleShapeBase::SetMargin(FMargin InMargin) {
}

void UScaleShapeBase::SetIsSolid(bool bInIsSolid) {
}

void UScaleShapeBase::SetIsShadowEnabled(bool bInIsShadowEnabled) {
}

void UScaleShapeBase::SetIsFaded(bool bInIsFaded) {
}

void UScaleShapeBase::SetFadeStart(FVector2D InFadeStart) {
}

void UScaleShapeBase::SetFadeEnd(FVector2D InFadeEnd) {
}

void UScaleShapeBase::SetColor(FLinearColor InColor) {
}

void UScaleShapeBase::SetBlurRadius(float InBlurRadius) {
}


