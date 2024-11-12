#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WirewayPackage.generated.h"

class AActor;

UCLASS(Blueprintable)
class UWirewayPackage : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FromActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ToActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SendFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SentFrame;
    
    UWirewayPackage();

    UFUNCTION(BlueprintCallable)
    void RunPackage();
    
};

