#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RivalsSpikeSpawn.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ARivalsSpikeSpawn : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRunningSpike;
    
    ARivalsSpikeSpawn(const FObjectInitializer& ObjectInitializer);

};

