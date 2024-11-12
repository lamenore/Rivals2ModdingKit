#pragma once
#include "CoreMinimal.h"
#include "SnapNetTransport.h"
#include "SnapNetSteamInterface.h"
#include "SnapNetSteamTransport.generated.h"

UCLASS(Blueprintable)
class SNAPNETSTEAM_API USnapNetSteamTransport : public USnapNetTransport, public ISnapNetSteamInterface {
    GENERATED_BODY()
public:
    USnapNetSteamTransport();

    UFUNCTION(BlueprintCallable)
    void SetServerPort(int32 Port);
    

    // Fix for true pure virtual functions not being implemented
};

