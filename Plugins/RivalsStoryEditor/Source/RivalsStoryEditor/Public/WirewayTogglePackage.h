#pragma once
#include "CoreMinimal.h"
#include "EWirewayType.h"
#include "WirewayPackage.h"
#include "WirewayTogglePackage.generated.h"

UCLASS(Blueprintable)
class UWirewayTogglePackage : public UWirewayPackage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWirewayType> OutType;
    
    UWirewayTogglePackage();

};

