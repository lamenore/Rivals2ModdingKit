#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GrabPartnerScalarParamData.h"
#include "GrabPartnerVectorParamData.h"
#include "MaterialSlotGroup.h"
#include "RivalsCameraInfluencer.h"
#include "RivalsCharacterMeshComponentData.h"
#include "RivalsGameplayRenderer.h"
#include "RivalsStatusVisualProperties.h"
#include "RivalsCharacterRenderer.generated.h"

class ARespawnPlatformRenderer;
class UBoxComponent;
class UMaterialInterface;
class URivalsHurtboxRendererComponent;
class URivalsSkeletalMeshEffectComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USnapNetEntityRendererComponent;
class UWidgetComponent;

UCLASS(Abstract, Blueprintable)
class RIVALS2_API ARivalsCharacterRenderer : public ARivalsGameplayRenderer, public IRivalsCameraInfluencer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CharacterMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OutlineMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* AuraMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletonMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USnapNetEntityRendererComponent* EntityRendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* OffscreenIndicatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* OverheadHudComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* AuraMaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrabPartnerScalarParamData> GrabPartnerScalarParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrabPartnerVectorParamData> GrabPartnerVectorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitpauseShakeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitpauseYOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsHurtboxRendererComponent* HurtboxRendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookaheadXOffset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMaterialSlotGroup> MaterialSlotGroups;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARespawnPlatformRenderer* RespawnPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ShieldMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URivalsSkeletalMeshEffectComponent*> SkeletalMeshEffectComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRivalsStatusVisualProperties> StatusVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DetectVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsCharacterMeshComponentData> CharacterMeshComponentData;
    
public:
    ARivalsCharacterRenderer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetMaterialSlotsInGroup(FName GroupName) const;
    

    // Fix for true pure virtual functions not being implemented
};

