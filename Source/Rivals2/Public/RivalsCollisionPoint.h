#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RivalsCollisionPoint.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ARivalsCollisionPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointIndex;
    
    ARivalsCollisionPoint(const FObjectInitializer& ObjectInitializer);

};

