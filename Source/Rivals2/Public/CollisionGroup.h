#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollisionGroup.generated.h"

USTRUCT(BlueprintType)
struct FCollisionGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FVector2D> Points;
    
    RIVALS2_API FCollisionGroup();
};

