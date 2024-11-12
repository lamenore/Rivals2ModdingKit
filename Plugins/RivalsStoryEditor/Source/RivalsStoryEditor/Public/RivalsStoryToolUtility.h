#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RivalsActiveHitbox.h"
#include "RivalsHitboxAttributes.h"
#include "RivalsHitboxOnHitProperties.h"
#include "RivalsPlatformData.h"
#include "Templates/SubclassOf.h"
#include "RivalsStoryToolUtility.generated.h"

class UDynamicMesh;
class URivalsCharacterSkinDefinition;
class URivalsGameInstance;
class URivalsStageData;
class URivalsStageSkinData;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API URivalsStoryToolUtility : public UObject {
    GENERATED_BODY()
public:
    URivalsStoryToolUtility();

    UFUNCTION(BlueprintCallable)
    static int32 WindingTest2D(const TArray<FVector2D> VectorArray);
    
    UFUNCTION(BlueprintCallable)
    static bool SeededRandom(int32 Seed, int32 Success, int32 OutOf);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterStoryEntity(UObject* ToRegister, UClass* ClassToRegister);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterSelfStoryEntity(UObject* ToRegister);
    
    UFUNCTION(BlueprintCallable)
    static void LoadStoryStageFromData(UObject* ContextObj, TSubclassOf<URivalsStageData> StageTo, TArray<TSubclassOf<URivalsCharacterSkinDefinition>> PlayerSkins);
    
    UFUNCTION(BlueprintCallable)
    static void LoadStoryStage(UObject* ContextObj, TSubclassOf<URivalsStageSkinData> StageTo, TArray<TSubclassOf<URivalsCharacterSkinDefinition>> PlayerSkins);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRenderWorld(UObject* ContextObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInStoryMode(UObject* ContextObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInShowBuild(UObject* ContextObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInEditor();
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSoftClassPtr<URivalsStageData>> GetQuickTravelStageSkins();
    
    UFUNCTION(BlueprintCallable)
    static FRivalsHitboxOnHitProperties GetHitboxOnHitProperties(FRivalsActiveHitbox& ActiveHitbox);
    
    UFUNCTION(BlueprintCallable)
    static FRivalsHitboxAttributes GetHitboxAttributes(FRivalsActiveHitbox& ActiveHitbox);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URivalsGameInstance* GetGameInstanceGlobal(UObject* ContextObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CurrentGameplayFrame(UObject* ContextObj);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertMeshToStageCollision(UPARAM(Ref) TArray<FRivalsPlatformData>& PlatformDatas, UDynamicMesh* Mesh, FVector Location, FRotator Rotation, FVector Scale, bool bOnlyNonSolid);
    
};

