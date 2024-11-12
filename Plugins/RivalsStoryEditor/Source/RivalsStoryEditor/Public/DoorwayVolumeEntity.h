#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertySoftObjectPath.h"
#include "SnapNetPropertyString.h"
#include "RivalsColliderEntity.h"
#include "RivalsStoryToggleInterface.h"
#include "Templates/SubclassOf.h"
#include "DoorwayVolumeEntity.generated.h"

class UPackage;
class URivalsBoxComponent;
class URivalsStageSkinData;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ADoorwayVolumeEntity : public ARivalsColliderEntity, public IRivalsStoryToggleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bAlwaysDebugView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bIsAutomaticTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bIsOneWay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 TransitionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertySoftObjectPath GotoStageSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsStageSkinData* LoadedStageSkinData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPackage* LoadedWorldPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath NewWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsBoxComponent* DoorwayVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString LinkedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SendToPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoorwayActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadedRawWorld;
    
    ADoorwayVolumeEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameplayLevelTransition();
    
    UFUNCTION(BlueprintCallable)
    URivalsStageSkinData* GetStageSkinData();
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<URivalsStageSkinData>> GetAllPossibleStageData();
    

    // Fix for true pure virtual functions not being implemented
};

