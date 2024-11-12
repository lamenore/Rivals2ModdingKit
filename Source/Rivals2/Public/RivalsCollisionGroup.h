#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RivalsPlatformData.h"
#include "RivalsCollisionGroup.generated.h"

class ARivalsCollisionPoint;

UCLASS(Blueprintable)
class RIVALS2_API ARivalsCollisionGroup : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARivalsCollisionPoint*> Points;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsPlatformData PlatformData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlatformIndex;
    
    ARivalsCollisionGroup(const FObjectInitializer& ObjectInitializer);

};

