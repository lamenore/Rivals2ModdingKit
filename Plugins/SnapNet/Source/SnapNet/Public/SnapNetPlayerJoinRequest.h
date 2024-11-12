#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SnapNetPropertyString.h"
#include "SnapNetPlayerJoinRequest.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPlayerJoinRequest : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString UniqueNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Complete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalPlayerIndex;
    
public:
    USnapNetPlayerJoinRequest();

    UFUNCTION(BlueprintCallable)
    void CompletePlayerJoin(int32 ErrorCode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintPopulate(APlayerController* LocalPlayerController);
    
};

