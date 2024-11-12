#pragma once
#include "CoreMinimal.h"
#include "ActorPool.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActiveActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InactiveActors;
    
    SNAPNET_API FActorPool();
};

