#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RivalsPlatformRenderer.generated.h"

class USnapNetEntityRendererComponent;

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasTrainingPlatform;
    
public:
    ARivalsPlatformRenderer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTrainingPlatformVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrainingGeometryChanged(bool IsVisible);
    
};

