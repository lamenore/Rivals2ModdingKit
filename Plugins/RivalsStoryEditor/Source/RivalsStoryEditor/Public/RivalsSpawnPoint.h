#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertySoftObjectPath.h"
#include "OnRespawnSetEventDelegate.h"
#include "RivalsDeathInterface.h"
#include "RivalsStoryEntity.h"
#include "RivalsSpawnPoint.generated.h"

class URivalsCharacterDefinition;
class URivalsCharacterSkinDefinition;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsSpawnPoint : public ARivalsStoryEntity, public IRivalsDeathInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRespawnSetEvent OnRespawnEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean SpawnInKnockdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertySoftObjectPath ForceCharacterSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsCharacterSkinDefinition* CompareCharacterSkinDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsCharacterDefinition* CompareCharacterDef;
    
    ARivalsSpawnPoint(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

