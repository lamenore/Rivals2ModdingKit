#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SnapNetAIController.h"
#include "AIInputEvent.h"
#include "AIInputEventContainer.h"
#include "ERivalsAIState.h"
#include "ERivalsBufferedInputAction.h"
#include "ERivalsCharacterAttack.h"
#include "RivalsAIController.generated.h"

class AActor;
class APawn;
class ARivalsCharacterEntity;

UCLASS(Blueprintable)
class RIVALS2_API ARivalsAIController : public ASnapNetAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERivalsAIState> BehaviorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsBufferedInputAction, FAIInputEventContainer> InputEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> PathPoints;
    
    ARivalsAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPathPoint(FVector2D NewPosition);
    
    UFUNCTION(BlueprintCallable)
    FAIInputEvent SetInputAxisValue(ERivalsBufferedInputAction InputAxis, float AxisValue, int32 HoldFrames, bool TopPriority);
    
    UFUNCTION(BlueprintCallable)
    FAIInputEvent SetInputActionValue(ERivalsBufferedInputAction InputAction, bool Value, int32 HoldFrames, bool TopPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackInputs(ERivalsCharacterAttack Attack);
    
    UFUNCTION(BlueprintCallable)
    void OptionSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPossessRival(APawn* InPawn);
    
    UFUNCTION(BlueprintCallable)
    bool IsAttackAvailable(ERivalsCharacterAttack InAttack);
    
    UFUNCTION(BlueprintCallable)
    ERivalsBufferedInputAction InputDirectionTowardOtherActor(AActor* OtherActor, bool TopPriority);
    
    UFUNCTION(BlueprintCallable)
    ARivalsCharacterEntity* GetTargetCharacter();
    
    UFUNCTION(BlueprintCallable)
    ERivalsBufferedInputAction GetInputActionTowardOtherActor(const ARivalsCharacterEntity* CharacterEntity, const AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    ERivalsBufferedInputAction GetForwardInputAction(const ARivalsCharacterEntity* CharacterEntity);
    
    UFUNCTION(BlueprintCallable)
    ARivalsCharacterEntity* GetCharacterEntity();
    
    UFUNCTION(BlueprintCallable)
    ERivalsBufferedInputAction GetBackwardInputAction(const ARivalsCharacterEntity* CharacterEntity);
    
};

