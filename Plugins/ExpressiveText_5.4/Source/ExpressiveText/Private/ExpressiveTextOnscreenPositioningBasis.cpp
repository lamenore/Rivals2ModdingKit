#include "ExpressiveTextOnscreenPositioningBasis.h"

FExpressiveTextOnscreenPositioningBasis::FExpressiveTextOnscreenPositioningBasis() {
    this->VerticalAlignment = EExpressiveTextVerticalAlignment::Top;
    this->HorizontalAlignment = EExpressiveTextHorizontalAlignment::Left;
    this->VerticalOffsetType = EExpressiveTextAlignmentOffsetType::PercentageOfParentSize;
    this->HorizontalOffsetType = EExpressiveTextAlignmentOffsetType::PercentageOfParentSize;
    this->WidthType = EExpressiveTextWrapMode::WrapAtPixelCount;
}

