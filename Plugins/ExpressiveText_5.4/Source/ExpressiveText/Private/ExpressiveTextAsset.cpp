#include "ExpressiveTextAsset.h"

UExpressiveTextAsset::UExpressiveTextAsset() {
}

void UExpressiveTextAsset::ProcessPositioning(FExpressiveTextAlignment& OutAlignment, FExpressiveTextWrapSettings& OutWidth) {
}

FExpressiveTextContext UExpressiveTextAsset::CreateContext() {
    return FExpressiveTextContext{};
}

int64 UExpressiveTextAsset::CalcChecksum() const {
    return 0;
}


