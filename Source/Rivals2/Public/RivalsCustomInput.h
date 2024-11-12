#pragma once
#include "CoreMinimal.h"
#include "SnapNetCustomInput.h"
#include "RivalsCustomInputSettings.h"
#include "RivalsCustomInput.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsCustomInput : public USnapNetCustomInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsCustomInputSettings InputSettings;
    
    URivalsCustomInput();

};

