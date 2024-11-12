#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SnapNetInput.generated.h"

class USnapNetCustomInput;

UCLASS(Blueprintable)
class SNAPNET_API USnapNetInput : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USnapNetCustomInput* CustomInput;
    
public:
    USnapNetInput();

};

