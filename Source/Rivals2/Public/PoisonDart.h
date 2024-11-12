#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsArticleEntity.h"
#include "PoisonDart.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API APoisonDart : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 NumDartsThrown;
    
    APoisonDart(const FObjectInitializer& ObjectInitializer);

};

