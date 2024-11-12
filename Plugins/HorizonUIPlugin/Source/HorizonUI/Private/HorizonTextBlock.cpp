#include "HorizonTextBlock.h"

UHorizonTextBlock::UHorizonTextBlock() {
}

TEnumAsByte<ETextJustify::Type> UHorizonTextBlock::GetJustification() const {
    return ETextJustify::Left;
}


