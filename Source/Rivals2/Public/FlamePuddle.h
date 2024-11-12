#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyFloat.h"
#include "RivalsArticleEntity.h"
#include "FlamePuddle.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AFlamePuddle : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat FlamePuddleVisualIndex;
    
    AFlamePuddle(const FObjectInitializer& ObjectInitializer);

};

