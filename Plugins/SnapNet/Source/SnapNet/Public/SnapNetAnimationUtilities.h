#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESnapNetMontageUpdateType.h"
#include "SnapNetAnimationUtilities.generated.h"

class UAnimInstance;
class UAnimMontage;
class UAnimSequenceBase;

UCLASS(Blueprintable)
class SNAPNET_API USnapNetAnimationUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetAnimationUtilities();

    UFUNCTION(BlueprintCallable)
    static void UpdateMontageState(UAnimInstance* AnimInstance, FName montageGroupName, UAnimMontage* Montage, float playbackPosition, ESnapNetMontageUpdateType updateType);
    
    UFUNCTION(BlueprintCallable)
    static void SyncMontageState(UAnimInstance* AnimInstance, FName montageGroupName, UAnimMontage* Montage, float playbackPosition, float PlayRate, ESnapNetMontageUpdateType updateType);
    
    UFUNCTION(BlueprintPure)
    static bool GetComponentSpaceSocketTransform(const UAnimSequenceBase* AnimationSequence, double Time, FName SocketName, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetComponentSpaceBoneTransform(const UAnimMontage* Montage, float Time, FName SocketName, FTransform& OutTransform);
    
};

