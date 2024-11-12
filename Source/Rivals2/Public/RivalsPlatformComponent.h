#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyVector2D.h"
#include "RivalsLedge.h"
#include "RivalsPlatformVertex.h"
#include "RivalsPlatformComponent.generated.h"

class ARivalsGameplayEntity;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RIVALS2_API URivalsPlatformComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bSolid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bDropThrough;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bDisableOnInvuln;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bResetOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsPlatformVertex> RelativePlatformVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsLedge> Ledges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector2D RelativeMinBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector2D RelativeMaxBounds;
    
    URivalsPlatformComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSolidPlatCollide(ARivalsGameplayEntity* ByEntity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlatformLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlatformLanded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlatformDropped();
    
};

