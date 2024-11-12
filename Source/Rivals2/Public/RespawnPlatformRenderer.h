#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERivalsColorSlot.h"
#include "Templates/SubclassOf.h"
#include "RespawnPlatformRenderer.generated.h"

class URivalsColorPalette;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class RIVALS2_API ARespawnPlatformRenderer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* RespawnPlatformMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OutlineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanFlip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsColorSlot, TSubclassOf<URivalsColorPalette>> Palettes;
    
    ARespawnPlatformRenderer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKickstarterPlatformText(const FString& Text);
    
};

