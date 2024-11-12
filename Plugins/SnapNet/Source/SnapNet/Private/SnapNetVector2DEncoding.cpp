#include "SnapNetVector2DEncoding.h"

FSnapNetVector2DEncoding::FSnapNetVector2DEncoding() {
    this->Encoding = ESnapNetFloatEncodingType::FixedRange;
    this->Precision = 0.00f;
    this->ExponentBits = 0;
    this->SignificandBits = 0;
}

