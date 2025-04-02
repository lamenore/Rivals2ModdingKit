#include "ExpressiveTextAlignment.h"

FExpressiveTextAlignment::FExpressiveTextAlignment() {
    this->VerticalAlignment = EExpressiveTextVerticalAlignment::Top;
    this->HorizontalAlignment = EExpressiveTextHorizontalAlignment::Left;
    this->VerticalOffset = 0.00f;
    this->HorizontalOffset = 0.00f;
    this->VerticalOffsetType = EExpressiveTextAlignmentOffsetType::PercentageOfParentSize;
    this->HorizontalOffsetType = EExpressiveTextAlignmentOffsetType::PercentageOfParentSize;
}

