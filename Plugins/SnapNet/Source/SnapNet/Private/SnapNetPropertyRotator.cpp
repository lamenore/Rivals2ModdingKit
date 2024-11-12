#include "SnapNetPropertyRotator.h"

FSnapNetPropertyRotator::FSnapNetPropertyRotator() {
    this->EncodingSource = ESnapNetRotatorEncodingSource::Custom;
    this->InterpolationMethod = ESnapNetRotatorInterpolationMethod::PerAxisLinearInterpolation;
    this->Precision = 0.00f;
}

