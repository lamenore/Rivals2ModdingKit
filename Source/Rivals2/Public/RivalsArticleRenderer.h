#pragma once
#include "CoreMinimal.h"
#include "RivalsCameraInfluencer.h"
#include "RivalsGameplayRenderer.h"
#include "RivalsArticleRenderer.generated.h"

class URivalsHurtboxRendererComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USnapNetEntityRendererComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class RIVALS2_API ARivalsArticleRenderer : public ARivalsGameplayRenderer, public IRivalsCameraInfluencer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ArticleMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ArticleOutlineMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USnapNetEntityRendererComponent* EntityRendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsHurtboxRendererComponent* HurtboxRendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* OffscreenIndicatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreEntityFacing;
    
public:
    ARivalsArticleRenderer(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

