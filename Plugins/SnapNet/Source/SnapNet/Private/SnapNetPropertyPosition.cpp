#include "SnapNetPropertyPosition.h"

FSnapNetPropertyPosition::FSnapNetPropertyPosition() {
    this->EncodingSource = ESnapNetPositionEncodingSource::SimulatedOrSpectatedDefault;
    this->SmallDeltaThreshold = 0.00f;
}

