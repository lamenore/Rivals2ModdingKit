#pragma once
#include "CoreMinimal.h"
#include "ERivalsColorSlot.h"
#include "ERivalsRandomCharacterSetting.h"
#include "VersusScreenPlayerInfo.generated.h"

class URivalsCharacterDefinition;
class URivalsCharacterSkinDefinition;

USTRUCT(BlueprintType)
struct FVersusScreenPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText playerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsCharacterDefinition* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsCharacterSkinDefinition* Skin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsRandomCharacterSetting RandomSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsColorSlot ColorSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsColorSlot PlayerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Wins;
    
    RIVALS2_API FVersusScreenPlayerInfo();
};

