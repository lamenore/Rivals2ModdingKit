#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "SnapNetAIController.generated.h"

class USnapNetInput;

UCLASS(Abstract, Blueprintable)
class SNAPNET_API ASnapNetAIController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USnapNetInput* Input;
    
public:
    ASnapNetAIController(const FObjectInitializer& ObjectInitializer);

};

