#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ERivalsColorSlot.h"
#include "ERivalsFacingDirection.h"
#include "RivalCaptureAnim.h"
#include "SkeletalMeshEffectData.h"
#include "Templates/SubclassOf.h"
#include "MenuRivalCapture.generated.h"

class ARespawnPlatformRenderer;
class ARivalsCharacterRenderer;
class ASkeletalMeshActor;
class UAnimSequence;
class UCameraComponent;
class UCurveLinearColor;
class UCurveLinearColorAtlas;
class UMaterial;
class UMaterialParameterCollection;
class URivalCaptureRenderData;
class URivalsCharacterDefinition;
class URivalsCharacterSkinDefinition;
class URivalsColorSlotData;
class URivalsSoundEffectContainer;
class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class AMenuRivalCapture : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* CaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsCharacterRenderer* RivalRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARespawnPlatformRenderer* PlatformRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkeletalMeshActor*> SkeletalMeshEffectActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsCharacterSkinDefinition* SkinDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsColorSlotData* ColorSlotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URivalsCharacterDefinition> RivalDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsCharacterDefinition* RivalCharDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint ViewportSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* PostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsCharacterSkinDefinition> SkinToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsColorSlot ColorSlotToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalCaptureRenderData* RenderDataToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CharacterPoseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CharacterAltPoseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterPoseAnimPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshEffectData> MeshEffectsToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowAllMeshEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutlineThicknessMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OutlineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DirectionalLightVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DirectionalLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* ShadingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* GlobalMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColorAtlas* ShadingCurveAtlas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FallbackStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopToFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAltPoseAsFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalCaptureAnim> AnimQueue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsFacingDirection FacingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnRespawnPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsSoundEffectContainer* UniversalSFX;
    
    AMenuRivalCapture(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSkeletalMeshEffects();
    
    UFUNCTION(BlueprintCallable)
    void UpdateOutline();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateLighting();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateCustomColors();
    
    UFUNCTION(BlueprintCallable)
    bool SpawnTestRival();
    
    UFUNCTION(BlueprintCallable)
    bool SpawnSkeletalMeshEffects();
    
    UFUNCTION(BlueprintCallable)
    bool SpawnRival(const URivalsCharacterSkinDefinition* SkinToSpawn, const ERivalsColorSlot ColorSlot, const bool& bForceCustomColors);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnRespawnPlatform(const TSoftClassPtr<ARespawnPlatformRenderer> PlatformToSpawn);
    
    UFUNCTION(BlueprintCallable)
    void ResetRenderData();
    
    UFUNCTION(BlueprintCallable)
    bool PoseRival(UAnimSequence* Animation, float AnimPos);
    
    UFUNCTION(BlueprintCallable)
    void PlayUniversalSFX(FName SFXName);
    
    UFUNCTION(BlueprintCallable)
    void PlayRivalSFX(FName SFXName);
    
    UFUNCTION(BlueprintCallable)
    bool LoadRenderData();
    
    UFUNCTION(BlueprintCallable)
    void Capture();
    
};

