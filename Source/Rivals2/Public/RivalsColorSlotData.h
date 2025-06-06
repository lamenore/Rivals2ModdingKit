#pragma once
#include "CoreMinimal.h"
#include "ArticleMaterialContainer.h"
#include "ERivalsColorSlot.h"
#include "EquipmentItemAsset.h"
#include "SkeletalMeshEffectDefinition.h"
#include "Templates/SubclassOf.h"
#include "RivalsColorSlotData.generated.h"

class ARivalsCharacterRenderer;
class UMaterialInterface;
class URivalsCharacterSkinDefinition;
class URivalsColorPalette;
class UTexture2D;

UCLASS(Blueprintable)
class RIVALS2_API URivalsColorSlotData : public UEquipmentItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsColorSlot ColorSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsCharacterSkinDefinition> ParentSkinClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARivalsCharacterRenderer> CharacterRendererClassOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> MaterialOverridesBySlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsColorPalette> BaseColorPalette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsColorPalette> SkinColorPalette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsColorPalette> ElementalPalette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FArticleMaterialContainer> ArticleMaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> CharacterSelectPortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSkeletalMeshEffectDefinition> MeshEffectDefinitions;
    
    URivalsColorSlotData();

};

