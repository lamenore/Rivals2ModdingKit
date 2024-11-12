#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsArticleEntity.h"
#include "Poppy.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API APoppy : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 AttachedRivalEntityIndex;
    
    APoppy(const FObjectInitializer& ObjectInitializer);

};

