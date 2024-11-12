#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEntityIndex.h"
#include "RivalsArticleEntity.h"
#include "VineWrap.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AVineWrap : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEntityIndex WrappedPlayerEntityIndex;
    
    AVineWrap(const FObjectInitializer& ObjectInitializer);

};

