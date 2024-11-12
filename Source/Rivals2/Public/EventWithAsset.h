#pragma once
#include "CoreMinimal.h"
#include "SnapNetEvent.h"
#include "SnapNetPropertyPosition.h"
#include "SnapNetPropertyRotator.h"
#include "SnapNetPropertySoftObjectPath.h"
#include "EventWithAsset.generated.h"

class UEventAsset;

UCLASS(Blueprintable)
class UEventWithAsset : public USnapNetEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertySoftObjectPath EventAssetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyPosition Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyRotator Rotation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEventAsset* EventAsset;
    
public:
    UEventWithAsset();

};

