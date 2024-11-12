#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsArticleEntity.h"
#include "Rock.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ARock : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 RockShardAngle;
    
    ARock(const FObjectInitializer& ObjectInitializer);

};

