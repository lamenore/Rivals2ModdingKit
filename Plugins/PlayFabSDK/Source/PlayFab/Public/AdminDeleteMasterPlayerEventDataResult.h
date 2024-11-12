#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminDeleteMasterPlayerEventDataResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeleteMasterPlayerEventDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminDeleteMasterPlayerEventDataResult();
};

