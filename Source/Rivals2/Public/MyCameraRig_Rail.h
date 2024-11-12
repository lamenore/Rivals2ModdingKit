#pragma once
#include "CoreMinimal.h"
#include "CameraRig_Rail.h"
#include "UObject/NoExportTypes.h"
#include "SplinePointInfo.h"
#include "MyCameraRig_Rail.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AMyCameraRig_Rail : public ACameraRig_Rail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSplinePointInfo> SplinePointInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowRail;
    
    AMyCameraRig_Rail(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AddRailPointDynamically(const FVector& Point);
    
};

