#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SnapNetEvent.generated.h"

UCLASS(Abstract, Blueprintable)
class SNAPNET_API USnapNetEvent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ConfirmedOrPredicted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reliable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IncludedInReplays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool predicted;
    
public:
    USnapNetEvent();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnPredicted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnFirstTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnConfirmed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnCanceled();
    
};

