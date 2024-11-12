#pragma once
#include "CoreMinimal.h"
#include "EntityReference.h"
#include "RivalsPlatformData.h"
#include "LedgeToggle.h"
#include "RivalsMeshComponent.h"
#include "RivalsPlatformGameplayTickDelegate.h"
#include "RivalsCollisionMeshComponent.generated.h"

class ARivalsPlatformEntity;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RIVALSSTORYEDITOR_API URivalsCollisionMeshComponent : public URivalsMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsPlatformData> PlatformData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEntityReference> EntityIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hasLedges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLedgeToggle> Ledges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabledOnInvuln;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrimaryPlatform;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsPlatformGameplayTick PlatformGameplayTick;
    
    URivalsCollisionMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RecreatePlatformComponents();
    
    UFUNCTION(BlueprintCallable)
    TArray<ARivalsPlatformEntity*> GetPlatformEntities();
    
    UFUNCTION(BlueprintCallable)
    void CompilePlatformData();
    
};

