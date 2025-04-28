#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEntityIndex.h"
#include "SnapNetPropertyFloat.h"
#include "EtalusIceSegment.h"
#include "EtalusIcePlatform.generated.h"

USTRUCT(BlueprintType)
struct FEtalusIcePlatform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEntityIndex PlatformEntityIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat PlatformPreviousXPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEtalusIceSegment> IceSegments;
    
    ETALUS_API FEtalusIcePlatform();
};

