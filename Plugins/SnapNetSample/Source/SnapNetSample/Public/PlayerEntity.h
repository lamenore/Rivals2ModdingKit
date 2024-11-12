#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertyString.h"
#include "PlayerEntity.generated.h"

class APlayerEntity;
class UObject;
class USnapNetEntityComponent;

UCLASS(Blueprintable)
class SNAPNETSAMPLE_API APlayerEntity : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean Bot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 Ping;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USnapNetEntityComponent* entityComponent;
    
public:
    APlayerEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetScoreboardColumn2Text() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetScoreboardColumn1Text() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APlayerEntity* Get(int32 PlayerIndex, const UObject* WorldContextObject);
    
};

