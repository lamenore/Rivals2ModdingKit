#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetReliableMessage.h"
#include "StartPlaytestMessage.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UStartPlaytestMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bIsStarting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bIsCheckLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 PlayerRequestingPlaytest;
    
    UStartPlaytestMessage();

    UFUNCTION(BlueprintCallable)
    void OnAssetsLoadedServer();
    
};

