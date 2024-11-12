#pragma once
#include "CoreMinimal.h"
#include "RivalsGameplayRenderer.h"
#include "RivalsArticleRenderer.generated.h"

class URivalsHurtboxRendererComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USnapNetEntityRendererComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class RIVALS2_API ARivalsArticleRenderer : public ARivalsGameplayRenderer {
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
    
public:
    ARivalsArticleRenderer(const FObjectInitializer& ObjectInitializer);

};

