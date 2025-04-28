#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EStagePickType.h"
#include "EStageType.h"
#include "EquipmentItemAsset.h"
#include "RivalsPlatformData.h"
#include "Templates/SubclassOf.h"
#include "RivalsStageData.generated.h"

class UObject;
class URivalsStageData;
class URivalsStageSkinData;
class UTexture2D;

UCLASS(Blueprintable)
class RIVALS2_API URivalsStageData : public UEquipmentItemAsset {
    GENERATED_BODY()
public:
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTourneyModeAuxPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDoublesStage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EStagePickType StagePickType;
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPrimaryPlatformAlignment() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObj"))
    UTexture2D* GetBoundsPreviewTexture(UObject* WorldContextObj, FLinearColor LineColor, int32 LineThickness, int32 ScaleFactor);
    
};

