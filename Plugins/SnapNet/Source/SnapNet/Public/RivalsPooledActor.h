#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RivalsPooledActor.generated.h"

UCLASS(Abstract, Blueprintable)
class SNAPNET_API ARivalsPooledActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInActiveUse;
    
public:
    ARivalsPooledActor(const FObjectInitializer& ObjectInitializer);

};

