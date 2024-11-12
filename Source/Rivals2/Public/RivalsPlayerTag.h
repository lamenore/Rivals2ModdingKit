#pragma once
#include "CoreMinimal.h"
#include "RivalsControlSettings.h"
#include "RivalsCosmeticSettings.h"
#include "RivalsRandomCharacterSettings.h"
#include "RivalsPlayerTag.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FRivalsPlayerTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasBeenWarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDefaultTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsControlSettings ControlSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsRandomCharacterSettings RandomCharacterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsCosmeticSettings CosmeticSettings;
    
    FRivalsPlayerTag();
};

