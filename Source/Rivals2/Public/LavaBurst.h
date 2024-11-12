#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsArticleEntity.h"
#include "LavaBurst.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ALavaBurst : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 FirstActiveWindow;
    
    ALavaBurst(const FObjectInitializer& ObjectInitializer);

};

