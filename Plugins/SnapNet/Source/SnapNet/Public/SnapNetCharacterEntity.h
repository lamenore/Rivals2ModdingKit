#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetPropertyVelocity.h"
#include "SnapNetCharacterEntity.generated.h"

class USnapNetEntityComponent;

UCLASS(Abstract, Blueprintable)
class SNAPNET_API ASnapNetCharacterEntity : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USnapNetEntityComponent* entityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVelocity Velocity;
    
public:
    ASnapNetCharacterEntity(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void CharacterMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
    
};

