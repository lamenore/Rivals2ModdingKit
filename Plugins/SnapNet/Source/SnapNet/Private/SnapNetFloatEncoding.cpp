#include "SnapNetFloatEncoding.h"

FSnapNetFloatEncoding::FSnapNetFloatEncoding() {
    this->Encoding = ESnapNetFloatEncodingType::FixedRange;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->Precision = 0.00f;
    this->ExponentBits = 0;
    this->SignificandBits = 0;
}

