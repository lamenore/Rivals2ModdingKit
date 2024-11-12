#pragma once
#include "CoreMinimal.h"
#include "SnapNetPlayerJoinRequest.h"
#include "SnapNetPropertyString.h"
#include "SnapNetSamplePlayerJoinRequest.generated.h"

UCLASS(Blueprintable)
class SNAPNETSAMPLE_API USnapNetSamplePlayerJoinRequest : public USnapNetPlayerJoinRequest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString DisplayName;
    
public:
    USnapNetSamplePlayerJoinRequest();

};

