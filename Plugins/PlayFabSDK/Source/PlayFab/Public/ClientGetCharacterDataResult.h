#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientGetCharacterDataResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetCharacterDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    FClientGetCharacterDataResult();
};

