#include "SnapNetAnimationUtilities.h"

USnapNetAnimationUtilities::USnapNetAnimationUtilities() {
}

void USnapNetAnimationUtilities::UpdateMontageState(UAnimInstance* AnimInstance, FName montageGroupName, UAnimMontage* Montage, float playbackPosition, ESnapNetMontageUpdateType updateType) {
}

void USnapNetAnimationUtilities::SyncMontageState(UAnimInstance* AnimInstance, FName montageGroupName, UAnimMontage* Montage, float playbackPosition, float PlayRate, ESnapNetMontageUpdateType updateType) {
}

bool USnapNetAnimationUtilities::GetComponentSpaceSocketTransform(const UAnimSequenceBase* AnimationSequence, double Time, FName SocketName, FTransform& OutTransform) {
    return false;
}

bool USnapNetAnimationUtilities::GetComponentSpaceBoneTransform(const UAnimMontage* Montage, float Time, FName SocketName, FTransform& OutTransform) {
    return false;
}


