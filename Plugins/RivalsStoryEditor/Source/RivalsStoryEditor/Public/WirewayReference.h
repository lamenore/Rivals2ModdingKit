#pragma once
#include "CoreMinimal.h"
#include "EWirewayType.h"
#include "WirewayReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWirewayReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MethodName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWirewayType> WireType;
    
    RIVALSSTORYEDITOR_API FWirewayReference();
};

