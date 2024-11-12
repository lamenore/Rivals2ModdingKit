#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SnapNetPropertyEntityIndex.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetPropertyFloat.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertySoftObjectPath.h"
#include "RivalsDeathInterface.h"
#include "RivalsStoryEntity.h"
#include "RivalsStoryToggleInterface.h"
#include "Templates/SubclassOf.h"
#include "RivalsAISpawn.generated.h"

class ARivalsAIController;
class ARivalsCharacterEntity;
class ARivalsPlayerEntity;
class URivalsArticleData;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsAISpawn : public ARivalsStoryEntity, public IRivalsStoryToggleInterface, public IRivalsDeathInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 StockCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum TeamToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertySoftObjectPath ControllerToUsePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertySoftObjectPath CharacterSkinToUsePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum ColorSlotToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat KBAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 DeathFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsCharacterEntity* SpawnedEntity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEntityIndex SpawnedEntIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsAIController* BotController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsPlayerEntity* PlayerEntity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LoadedSkinClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<URivalsArticleData>> LoadedArticles;
    
    ARivalsAISpawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Spawn();
    
    UFUNCTION(BlueprintCallable)
    void EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void DestroySpawnedObjects();
    
    UFUNCTION(BlueprintCallable)
    bool Despawn();
    

    // Fix for true pure virtual functions not being implemented
};

