#pragma once
#include "CoreMinimal.h"
#include "RivalsArticleEntity.h"
#include "OrbyLaser.generated.h"

class AOrby;

UCLASS(Blueprintable)
class RIVALS2_API AOrbyLaser : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOrby* OrbyParent;
    
    AOrbyLaser(const FObjectInitializer& ObjectInitializer);

};

