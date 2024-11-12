#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ESnapNetEntityInstantReplayBehavior.h"
#include "ESnapNetEntityPredictionAtSpawn.h"
#include "ESnapNetEntityPredictionMode.h"
#include "ESnapNetTransformSyncMode.h"
#include "SnapNetPropertiesModifiedDynamicDelegateDelegate.h"
#include "SnapNetEntityComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SNAPNET_API USnapNetEntityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DestroyedBySnapNet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EntityIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ActorTickWasEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Awake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> EntityRendererClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastPredictionError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastPredictionErrorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESnapNetEntityPredictionAtSpawn PredictionAtSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESnapNetEntityPredictionMode PredictionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> PreviouslyEnabledComponentTicks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertiesModifiedDynamicDelegate ReceiveSnapNetPropertiesModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool requiresOwnerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RetainOnMapChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SavedPredictionPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool SavedPredictionTeleportFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool SavedPredictionValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Simulated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESnapNetTransformSyncMode TransformSyncMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SmallPositionDeltaThreshold;
    
public:
    USnapNetEntityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRequiresOwnerInput(bool NewRequiresOwnerInput);
    
    UFUNCTION(BlueprintCallable)
    void SetPredictedForPlayer(int32 PlayerIndex, bool predicted);
    
    UFUNCTION(BlueprintCallable)
    void SetPredictedForAllPlayers(bool predicted);
    
    UFUNCTION(BlueprintCallable)
    bool SetOwnerPlayerIndex(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetInstantReplayBehavior(ESnapNetEntityInstantReplayBehavior Behavior);
    
    UFUNCTION(BlueprintCallable)
    void SendToPlayer(int32 PlayerIndex, bool send);
    
    UFUNCTION(BlueprintCallable)
    void SendToNoPlayers();
    
    UFUNCTION(BlueprintCallable)
    void SendToAllPlayers();
    
    UFUNCTION(BlueprintCallable)
    void MarkTeleported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSimulated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnerPlayerLocal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSimulatedState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimeMilliseconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOwnerPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AActor> GetEntityRendererClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GeneratePerFrameSeed(int32 fixedSeed) const;
    
};

