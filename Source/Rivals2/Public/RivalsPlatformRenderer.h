#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RivalsPlatformRenderer.generated.h"

class USkeletalMeshComponent;
class USnapNetEntityRendererComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class RIVALS2_API ARivalsPlatformRenderer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USnapNetEntityRendererComponent* EntityRendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WindowTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WindowLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> TrainingPlatMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> PlatMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> PlatSkeletalMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasTrainingPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrainingPlatformVisible;
    
public:
    ARivalsPlatformRenderer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTrainingPlatformVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlatformVisualsChanged(bool IsVisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrainingPlatformVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UStaticMeshComponent*> GetTrainingPlatMeshComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USkeletalMeshComponent*> GetPlatSkeletalMeshComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UStaticMeshComponent*> GetPlatMeshComponents();
    
};

