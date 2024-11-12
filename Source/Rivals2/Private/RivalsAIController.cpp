#include "RivalsAIController.h"

ARivalsAIController::ARivalsAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviorState = Passive;
    this->FrameDifference = 1;
    this->LocomotionPrecision = 50.00f;
}

void ARivalsAIController::SetPathPoint(FVector2D NewPosition) {
}

FAIInputEvent ARivalsAIController::SetInputAxisValue(ERivalsBufferedInputAction InputAxis, float AxisValue, int32 HoldFrames, bool TopPriority) {
    return FAIInputEvent{};
}

FAIInputEvent ARivalsAIController::SetInputActionValue(ERivalsBufferedInputAction InputAction, bool Value, int32 HoldFrames, bool TopPriority) {
    return FAIInputEvent{};
}

void ARivalsAIController::SetAttackInputs(ERivalsCharacterAttack Attack) {
}

void ARivalsAIController::OptionSelect() {
}


bool ARivalsAIController::IsAttackAvailable(ERivalsCharacterAttack InAttack) {
    return false;
}

ERivalsBufferedInputAction ARivalsAIController::InputDirectionTowardOtherActor(AActor* OtherActor, bool TopPriority) {
    return ERivalsBufferedInputAction::Left;
}

ARivalsCharacterEntity* ARivalsAIController::GetTargetCharacter() {
    return NULL;
}

ARivalsPlayerEntity* ARivalsAIController::GetRivalsPawn() {
    return NULL;
}

ERivalsBufferedInputAction ARivalsAIController::GetInputActionTowardOtherActor(const ARivalsCharacterEntity* CharacterEntity, const AActor* OtherActor) {
    return ERivalsBufferedInputAction::Left;
}

ERivalsBufferedInputAction ARivalsAIController::GetForwardInputAction(const ARivalsCharacterEntity* CharacterEntity) {
    return ERivalsBufferedInputAction::Left;
}

ARivalsCharacterEntity* ARivalsAIController::GetCharacterEntity() {
    return NULL;
}

ERivalsBufferedInputAction ARivalsAIController::GetBackwardInputAction(const ARivalsCharacterEntity* CharacterEntity) {
    return ERivalsBufferedInputAction::Left;
}


