#include "RivalsStoryToolUtility.h"
#include "Templates/SubclassOf.h"

URivalsStoryToolUtility::URivalsStoryToolUtility() {
}

int32 URivalsStoryToolUtility::WindingTest2D(const TArray<FVector2D> VectorArray) {
    return 0;
}

bool URivalsStoryToolUtility::SeededRandom(int32 Seed, int32 Success, int32 OutOf) {
    return false;
}

void URivalsStoryToolUtility::RegisterStoryEntity(UObject* ToRegister, UClass* ClassToRegister) {
}

void URivalsStoryToolUtility::RegisterSelfStoryEntity(UObject* ToRegister) {
}

void URivalsStoryToolUtility::LoadStoryStageFromData(UObject* ContextObj, TSubclassOf<URivalsStageData> StageTo, TArray<TSubclassOf<URivalsCharacterSkinDefinition>> PlayerSkins) {
}

void URivalsStoryToolUtility::LoadStoryStage(UObject* ContextObj, TSubclassOf<URivalsStageSkinData> StageTo, TArray<TSubclassOf<URivalsCharacterSkinDefinition>> PlayerSkins) {
}

bool URivalsStoryToolUtility::IsRenderWorld(UObject* ContextObj) {
    return false;
}

bool URivalsStoryToolUtility::IsInStoryMode(UObject* ContextObj) {
    return false;
}

bool URivalsStoryToolUtility::IsInShowBuild(UObject* ContextObj) {
    return false;
}

bool URivalsStoryToolUtility::IsInEditor() {
    return false;
}

TArray<TSoftClassPtr<URivalsStageData>> URivalsStoryToolUtility::GetQuickTravelStageSkins() {
    return TArray<TSoftClassPtr<URivalsStageData>>();
}

FRivalsHitboxOnHitProperties URivalsStoryToolUtility::GetHitboxOnHitProperties(FRivalsActiveHitbox& ActiveHitbox) {
    return FRivalsHitboxOnHitProperties{};
}

FRivalsHitboxAttributes URivalsStoryToolUtility::GetHitboxAttributes(FRivalsActiveHitbox& ActiveHitbox) {
    return FRivalsHitboxAttributes{};
}

URivalsGameInstance* URivalsStoryToolUtility::GetGameInstanceGlobal(UObject* ContextObj) {
    return NULL;
}

int32 URivalsStoryToolUtility::CurrentGameplayFrame(UObject* ContextObj) {
    return 0;
}

void URivalsStoryToolUtility::ConvertMeshToStageCollision(TArray<FRivalsPlatformData>& PlatformDatas, UDynamicMesh* Mesh, FVector Location, FRotator Rotation, FVector Scale, bool bOnlyNonSolid) {
}


