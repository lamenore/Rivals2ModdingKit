#pragma once
#include "CoreMinimal.h"
#include "RivalsArticleEntity.h"
#include "StoryInterface.h"
#include "Templates/SubclassOf.h"
#include "RivalsStoryArticle.generated.h"

class ARivalsStoryRenderer;
class USceneComponent;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsStoryArticle : public ARivalsArticleEntity, public IStoryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsStoryRenderer* RenderActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARivalsStoryRenderer> RenderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> ComponentsToRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<USceneComponent*, USceneComponent*> CopiedToRenderer;
    
    ARivalsStoryArticle(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

