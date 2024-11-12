#include "SnapNetEntityRendererComponent.h"

USnapNetEntityRendererComponent::USnapNetEntityRendererComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EntityIndex = -1;
    this->LastFrameNumberTransformPostProcessed = 0;
    this->LastPredictionErrorTime = 0;
    this->PositionSmoothingRate = 0.00f;
    this->PredictionErrorPostProcessingActive = false;
    this->predictionErrorReductionRate = 32.00f;
    this->predictionErrorThreshold = 0.01f;
    this->RotationSmoothingRate = 0.00f;
    this->SimulationToggleErrorReductionRate = 8.00f;
    this->SimulationTogglePostProcessingActive = false;
    this->SmoothingPostProcessingActive = false;
    this->WasEntitySimulated = false;
}

void USnapNetEntityRendererComponent::SetPredictionErrorThreshold(float NewPredictionErrorThreshold) {
}

void USnapNetEntityRendererComponent::SetPredictionErrorReductionRate(float NewPredictionErrorReductionRate) {
}

float USnapNetEntityRendererComponent::GetRotationSmoothingRate() const {
    return 0.0f;
}

float USnapNetEntityRendererComponent::GetPositionSmoothingRate() const {
    return 0.0f;
}


