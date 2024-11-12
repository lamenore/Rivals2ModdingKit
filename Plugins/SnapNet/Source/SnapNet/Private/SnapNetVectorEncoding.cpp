#include "SnapNetVectorEncoding.h"

FSnapNetVectorEncoding::FSnapNetVectorEncoding() {
    this->Encoding = ESnapNetFloatEncodingType::FixedRange;
    this->Precision = 0.00f;
    this->ExponentBits = 0;
    this->SignificandBits = 0;
}

