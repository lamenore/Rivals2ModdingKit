#include "SnapNetPropertyVectorFunctionLibrary.h"

USnapNetPropertyVectorFunctionLibrary::USnapNetPropertyVectorFunctionLibrary() {
}

void USnapNetPropertyVectorFunctionLibrary::SetValue_Velocity(FSnapNetPropertyVelocity& SnapNetPropertyVelocity, const FVector& Value, ESnapNetInterpolation Interpolation) {
}

void USnapNetPropertyVectorFunctionLibrary::SetValue_Vector(FSnapNetPropertyVector& SnapNetPropertyVector, const FVector& Value, ESnapNetInterpolation Interpolation) {
}

void USnapNetPropertyVectorFunctionLibrary::SetValue_Position(FSnapNetPropertyPosition& SnapNetPropertyPosition, const FVector& Value, ESnapNetInterpolation Interpolation) {
}

void USnapNetPropertyVectorFunctionLibrary::SetValue_AngularVelocity(FSnapNetPropertyAngularVelocity& SnapNetPropertyAngularVelocity, const FVector& Value, ESnapNetInterpolation Interpolation) {
}

FVector USnapNetPropertyVectorFunctionLibrary::Conv_SnapNetPropertyVelocityToVector(const FSnapNetPropertyVelocity& SnapNetPropertyVelocity) {
    return FVector{};
}

FVector USnapNetPropertyVectorFunctionLibrary::Conv_SnapNetPropertyVectorToVector(const FSnapNetPropertyVector& SnapNetPropertyVector) {
    return FVector{};
}

FVector USnapNetPropertyVectorFunctionLibrary::Conv_SnapNetPropertyPositionToVector(const FSnapNetPropertyPosition& SnapNetPropertyPosition) {
    return FVector{};
}

FVector USnapNetPropertyVectorFunctionLibrary::Conv_SnapNetPropertyAngularVelocityToVector(const FSnapNetPropertyAngularVelocity& SnapNetPropertyAngularVelocity) {
    return FVector{};
}


