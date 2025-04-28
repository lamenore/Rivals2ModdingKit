#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ERivalsColorSlot.h"
#include "ERivalsTutorialDifficulty.h"
#include "RivalsTutorialData.h"
#include "Templates/SubclassOf.h"
#include "RivalsTutorialSettings.generated.h"

class AActor;
class URivalsArticleData;
class URivalsCharacterSkinDefinition;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class RIVALS2_API URivalsTutorialSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsTutorialDifficulty, FRivalsTutorialData> TutorialLevels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsArticleData> OrbyProjectileArticle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsArticleData> OrbyLaserArticle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> OrbyChargeBar;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<URivalsCharacterSkinDefinition>> SkinChoices;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERivalsColorSlot> ColorSlotChoices;
    
    URivalsTutorialSettings();

};

