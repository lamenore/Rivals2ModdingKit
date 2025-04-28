#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "EtalusIceTilePatch.h"
#include "EtalusIceSegment.generated.h"

USTRUCT(BlueprintType)
struct FEtalusIceSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 SegmentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEtalusIceTilePatch> IceTilePatches;
    
    ETALUS_API FEtalusIceSegment();
};

