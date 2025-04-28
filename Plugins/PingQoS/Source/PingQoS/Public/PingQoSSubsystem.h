#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "PingQoSDelegateDelegate.h"
#include "PingQoSInfo.h"
#include "SinglePingQoSDelegateDelegate.h"
#include "PingQoSSubsystem.generated.h"

UCLASS(Blueprintable)
class PINGQOS_API UPingQoSSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingQoSDelegate OnAllPingsCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSinglePingQoSDelegate OnPingCompleted;
    
    UPingQoSSubsystem();

    UFUNCTION(BlueprintCallable)
    bool Update();
    
    UFUNCTION(BlueprintCallable)
    void Init(TArray<FPingQoSInfo> SetInfo);
    
};

