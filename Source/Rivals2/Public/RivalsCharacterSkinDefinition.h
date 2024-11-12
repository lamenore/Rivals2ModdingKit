#pragma once
#include "CoreMinimal.h"
#include "ERivalsColorSlot.h"
#include "EquipmentItemAsset.h"
#include "MaterialArray.h"
#include "MaterialSlotCustomColorAssignments.h"
#include "StockIconData.h"
#include "RivalsCharacterSkinDefinition.generated.h"

class ARivalsArticleRenderer;
class ARivalsCharacterRenderer;
class UGameOverRivalCaptureRenderData;
class UMaterialInterface;
class UMenuRivalCaptureRenderData;
class URivalCaptureRenderData;
class URivalsCharacterAttackData;
class URivalsCharacterDefinition;
class URivalsCharacterSkinDefinition;
class URivalsColorSlotData;
class URivalsVictorySequenceData;
class USkeletalMesh;

UCLASS(Blueprintable)
class RIVALS2_API URivalsCharacterSkinDefinition : public UEquipmentItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkinIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URivalsCharacterDefinition> CharacterDefinition;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterName;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Coolness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARivalsCharacterRenderer> CharacterRendererClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<ARivalsArticleRenderer>> ArticleRendererOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsVictorySequenceData* VictorySequenceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URivalCaptureRenderData> CssPortraitPoseRenderData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMenuRivalCaptureRenderData> MainMenuAnimRenderData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGameOverRivalCaptureRenderData> GameOverAnimRenderData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URivalsCharacterAttackData> IntroOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsColorSlot, ERivalsColorSlot> ColorSlotForTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMaterialSlotCustomColorAssignments> BaseMaterialSlotCustomColorAssignments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMaterialSlotCustomColorAssignments> SkinMaterialSlotCustomColorAssignments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialSlotCustomColorAssignments ElementalCustomColorAssignments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementalLerpCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMaterialArray> NiagaraMaterialSlotAssociations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStockIconData StockIconData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> ShieldMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> ShieldMaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundEventIndex;
    
    URivalsCharacterSkinDefinition();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMaterialInterface> GetStockIconMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<URivalsCharacterSkinDefinition*> GetSkinDefinitions(TSoftClassPtr<URivalsCharacterDefinition> InCharacterDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URivalsColorSlotData* GetColorSlotData(const ERivalsColorSlot ColorSlot) const;
    
};

