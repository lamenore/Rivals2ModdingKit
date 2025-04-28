#pragma once
#include "CoreMinimal.h"
#include "PlayerGetMatchAccountData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerGetMatchAccountData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MasterPlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitlePlayFabId;
    
    RIVALS2_API FPlayerGetMatchAccountData();
};

