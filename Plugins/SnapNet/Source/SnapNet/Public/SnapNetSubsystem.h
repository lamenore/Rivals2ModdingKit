#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SnapNetStringPool.h"
#include "Templates/SubclassOf.h"
#include "SnapNetSubsystem.generated.h"

class AActor;
class UObject;
class USnapNetClient;
class USnapNetEntityRendererComponent;
class USnapNetEvent;
class USnapNetPlayerJoinRequest;
class USnapNetReliableMessage;
class USnapNetServer;
class USnapNetSubsystem;
class UWorld;

UCLASS(Blueprintable)
class SNAPNET_API USnapNetSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USnapNetClient* client;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadingReferenceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USnapNetPlayerJoinRequest> PlayerJoinRequestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> RegisteredEntityClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> RegisteredEventClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> RegisteredMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> RegisteredReliableMessageClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSnapNetStringPool> RegisteredStringPools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SeamlessTravelInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USnapNetServer* Server;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SingleFrameAdvanceActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SingleFrameAdvanceEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SingleFrameAdvanceRequested;
    
public:
    USnapNetSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterAllStringPools();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterAllReliableMessageClasses();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterAllMaps();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterAllEventClasses();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterAllEntityClasses();
    
    UFUNCTION(BlueprintCallable)
    void SetSingleFrameAdvanceEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerJoinRequestClass(TSubclassOf<USnapNetPlayerJoinRequest> NewPlayerJoinRequestClass);
    
    UFUNCTION(BlueprintCallable)
    void RequestFrameAdvance();
    
    UFUNCTION(BlueprintCallable)
    void RegisterStringPools(const TArray<FSnapNetStringPool>& StringPools);
    
    UFUNCTION(BlueprintCallable)
    void RegisterStringPool(const FSnapNetStringPool& stringPool);
    
    UFUNCTION(BlueprintCallable)
    void RegisterReliableMessageClasses(const TArray<TSubclassOf<USnapNetReliableMessage>>& ReliableMessageClasses);
    
    UFUNCTION(BlueprintCallable)
    void RegisterReliableMessageClass(TSubclassOf<USnapNetReliableMessage> reliableMessageClass);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMaps(TArray<TSoftObjectPtr<UWorld>> Maps);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMap(TSoftObjectPtr<UWorld> Map);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEventClasses(const TArray<TSubclassOf<USnapNetEvent>>& EventClasses);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEventClass(TSubclassOf<USnapNetEvent> eventClass);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEntityClasses(const TArray<TSubclassOf<AActor>>& EntityClasses);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEntityClass(TSubclassOf<AActor> entityClass);
    
    UFUNCTION(BlueprintCallable)
    void RegisterClassesFromSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSnapNetServer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSnapNetClient(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSingleFrameAdvanceEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetServer* GetServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<USnapNetPlayerJoinRequest> GetPlayerJoinRequestClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetEntityRendererComponent* GetEntityRendererComponent(int32 EntityIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetEntityRenderer(int32 EntityIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USnapNetClient* GetClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USnapNetSubsystem* Get(const UObject* WorldContextObject);
    
};

