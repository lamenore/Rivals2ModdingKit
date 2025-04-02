#include "ExpressiveTextAlignmentFunctions.h"

UExpressiveTextAlignmentFunctions::UExpressiveTextAlignmentFunctions() {
}

FExpressiveTextAlignment UExpressiveTextAlignmentFunctions::TopRight() {
    return FExpressiveTextAlignment{};
}

FExpressiveTextAlignment UExpressiveTextAlignmentFunctions::TopLeft() {
    return FExpressiveTextAlignment{};
}

FExpressiveTextAlignment UExpressiveTextAlignmentFunctions::TopCenter() {
    return FExpressiveTextAlignment{};
}

FVector2D UExpressiveTextAlignmentFunctions::PositionToAlignmentOffset(FVector2D Position, FVector2D DisplaySize, FVector2D TextSize, const FExpressiveTextAlignment& Alignment) {
    return FVector2D{};
}

FExpressiveTextAlignment UExpressiveTextAlignmentFunctions::DefineVerticalOffset(FExpressiveTextAlignment& Alignment, float Amount, EExpressiveTextAlignmentOffsetType OffsetType) {
    return FExpressiveTextAlignment{};
}

FExpressiveTextAlignment UExpressiveTextAlignmentFunctions::DefineHorizontalOffset(FExpressiveTextAlignment& Alignment, float Amount, EExpressiveTextAlignmentOffsetType OffsetType) {
    return FExpressiveTextAlignment{};
}

FExpressiveTextAlignment UExpressiveTextAlignmentFunctions::CenterRight() {
    return FExpressiveTextAlignment{};
}

FExpressiveTextAlignment UExpressiveTextAlignmentFunctions::CenterLeft() {
    return FExpressiveTextAlignment{};
}

FExpressiveTextAlignment UExpressiveTextAlignmentFunctions::Center() {
    return FExpressiveTextAlignment{};
}

FExpressiveTextAlignment UExpressiveTextAlignmentFunctions::BottomRight() {
    return FExpressiveTextAlignment{};
}

FExpressiveTextAlignment UExpressiveTextAlignmentFunctions::BottomLeft() {
    return FExpressiveTextAlignment{};
}

FExpressiveTextAlignment UExpressiveTextAlignmentFunctions::BottomCenter() {
    return FExpressiveTextAlignment{};
}

FVector2D UExpressiveTextAlignmentFunctions::AlignmentToPosition(const FExpressiveTextAlignment& Alignment, const FVector2D& DisplaySize, const FVector2D& TextSize) {
    return FVector2D{};
}


