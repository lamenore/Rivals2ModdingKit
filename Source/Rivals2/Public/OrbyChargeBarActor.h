#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OrbyChargeBarActor.generated.h"

class AOrby;

UCLASS(Blueprintable)
class RIVALS2_API AOrbyChargeBarActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOrby* Orby;
    
public:
    AOrbyChargeBarActor(const FObjectInitializer& ObjectInitializer);

};

