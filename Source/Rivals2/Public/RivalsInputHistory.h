#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertyVector2D.h"
#include "RivalsInputHistory.generated.h"

USTRUCT(BlueprintType)
struct FRivalsInputHistory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 InputsDown;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 InputsPressed[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector2D JoystickHistory[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 LatestInputIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 LatestJoystickIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector2D RightStickPosition;
    
public:
    RIVALS2_API FRivalsInputHistory();
};

