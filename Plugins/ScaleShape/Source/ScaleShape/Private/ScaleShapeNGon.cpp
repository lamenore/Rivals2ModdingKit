#include "ScaleShapeNGon.h"

UScaleShapeNGon::UScaleShapeNGon() {
    this->MaterialVariants.AddDefaulted(8);
    this->AngleDivisor = 3.33f;
    this->NumberOfSides = 5.00f;
    this->Radius = 1.00f;
}

void UScaleShapeNGon::SetRadius(float InRadius) {
}

void UScaleShapeNGon::SetNumberOfSides(float InNumberOfSides) {
}

void UScaleShapeNGon::SetAngleDivisor(float InAngleDivisor) {
}


