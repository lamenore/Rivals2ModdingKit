#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "RivalsArticleEntity.h"
#include "Terry.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ATerry : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean MaypulAlreadyTethered;
    
    ATerry(const FObjectInitializer& ObjectInitializer);

};

