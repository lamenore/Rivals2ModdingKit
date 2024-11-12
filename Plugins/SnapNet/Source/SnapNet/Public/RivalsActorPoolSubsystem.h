#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ActorPool.h"
#include "RivalsActorPoolSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class SNAPNET_API URivalsActorPoolSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FActorPool> ActorPools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> PreallocatedActorClasses;
    
public:
    URivalsActorPoolSubsystem();

};

