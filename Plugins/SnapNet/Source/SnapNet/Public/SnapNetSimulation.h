#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ESnapNetSimulationFrameType.h"
#include "Templates/SubclassOf.h"
#include "SnapNetSimulation.generated.h"

class AActor;
class UPendingNetGame;
class USnapNetClient;
class USnapNetCustomInput;
class USnapNetEntityComponent;
class USnapNetEntityRendererComponent;
class USnapNetEvent;
class USnapNetInput;
class USnapNetServer;
class USnapNetSimulation;
class USnapNetSubsystem;
class UWorld;

UCLASS(Blueprintable)
class SNAPNET_API USnapNetSimulation : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USnapNetEntityComponent*> Entities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> EntityIndicesWantingModifiedCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USnapNetEntityRendererComponent*> EntityRenderers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EntitySimulatedStatusUpToDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USnapNetEvent*> Events;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 FrameCounterRenderer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 FrameCounterSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USnapNetInput*> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPendingNetGame* PendingNetGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayingInstantReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USnapNetInput*> PreviousInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PreviousNextURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USnapNetEntityComponent*> SavedEntityComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SavedEntityOuters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    USnapNetSimulation();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInputActionReleased(int32 PlayerIndex, FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInputActionPressed(int32 PlayerIndex, FName ActionName) const;
    
    UFUNCTION(BlueprintCallable)
    USnapNetEvent* SpawnEvent(TSubclassOf<USnapNetEvent> eventClass, const USnapNetEntityComponent* entityComponent);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnEntity(TSubclassOf<AActor> entityClass, int32 ownerPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestEntityRendererUpdate(int32 EntityIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputActionDown(int32 PlayerIndex, FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetSubsystem* GetSubsystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStringCount(const FName& StringPoolName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetString(const FName& StringPoolName, int32 stringIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetServer* GetServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreviousInputAxis(int32 PlayerIndex, FName AxisName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetCustomInput* GetPreviousCustomInput(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputAxis(int32 PlayerIndex, FName AxisName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInputAge(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESnapNetSimulationFrameType GetFrameType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetEntityRendererComponent* GetEntityRenderer(int32 EntityIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetEntityComponent* GetEntityComponent(int32 EntityIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetEntity(int32 EntityIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetCustomInput* GetCustomInput(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetControlRotation(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetClient* GetClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USnapNetSimulation* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindString(const FName& StringPoolName, const FString& Value) const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyEntity(int32 EntityIndex);
    
};

