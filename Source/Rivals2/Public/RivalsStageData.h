#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "EStageType.h"
#include "RivalsPlatformData.h"
#include "Templates/SubclassOf.h"
#include "RivalsStageData.generated.h"

class URivalsStageData;
class URivalsStageSkinData;

UCLASS(Blueprintable)
class RIVALS2_API URivalsStageData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExcludeFromBuild;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StageSkinNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsPlatformData> PlatformData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideBlastzoneXPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopBlastzoneZPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BottomBlastzoneZPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnZPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> SpawnLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FallbackSpawnLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageType StageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsStageData> DoublesOverrideStageData;
    
    URivalsStageData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStageWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URivalsStageSkinData*> GetStageSkins();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSideBlastzoneDistance() const;
    
};

