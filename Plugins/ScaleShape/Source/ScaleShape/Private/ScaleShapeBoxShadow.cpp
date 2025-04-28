#include "ScaleShapeBoxShadow.h"
#include "Components/SlateWrapperTypes.h"

UScaleShapeBoxShadow::UScaleShapeBoxShadow() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->bIsInset = false;
    this->SpreadRadius = 4.00f;
    this->BlurRadius = 4.00f;
    this->MaterialVariants.AddDefaulted(2);
}

void UScaleShapeBoxShadow::SetSpreadRadius(float InSpreadRadius) {
}

void UScaleShapeBoxShadow::SetOffset(FVector2D InOffset) {
}

void UScaleShapeBoxShadow::SetIsInset(bool bInIsInset) {
}

void UScaleShapeBoxShadow::SetColor(FLinearColor InColor) {
}

void UScaleShapeBoxShadow::SetBlurRadius(float InBlurRadius) {
}


