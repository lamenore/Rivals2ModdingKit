#pragma once
#include "CoreMinimal.h"
#include "RivalsCharacterRenderer.h"
#include "SkeletalMeshWithOutline.h"
#include "Templates/SubclassOf.h"
#include "EtalusRenderer.generated.h"

class UAnimInstance;
class UAnimSequence;
class UMaterialInterface;
class USkeletalMeshComponent;
class USkinnedAsset;

UCLASS(Blueprintable)
class ETALUS_API AEtalusRenderer : public ARivalsCharacterRenderer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkinnedAsset* IceBlockMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* IceBlockAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> IceBlockMaterialOverridesBySlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkinnedAsset* IcePatchMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> IcePatchMaterialOverridesBySlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> IcePatchAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkinnedAsset* ShieldFreezeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> ShieldFreezeMaterialOverridesBySlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshWithOutline> IceBlockMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshWithOutline> IcePatchMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> ShieldFreezeMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ShockwaveMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> ShockwaveMaterialOverridesBySlotName;
    
    AEtalusRenderer(const FObjectInitializer& ObjectInitializer);

};

