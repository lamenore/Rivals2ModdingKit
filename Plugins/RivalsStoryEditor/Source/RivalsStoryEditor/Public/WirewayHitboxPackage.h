#pragma once
#include "CoreMinimal.h"
#include "RivalsHitboxOnHitProperties.h"
#include "WirewayPackage.h"
#include "WirewayHitboxPackage.generated.h"

UCLASS(Blueprintable)
class UWirewayHitboxPackage : public UWirewayPackage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsHitboxOnHitProperties OnHitProperties;
    
    UWirewayHitboxPackage();

};

