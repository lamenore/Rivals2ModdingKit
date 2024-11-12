#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyEntityIndex.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsArticleEntity.h"
#include "Lily.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ALily : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 LifespanRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean OwnerMaypulGrabbed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEntityIndex WrappedPlayerEntityIndex;
    
    ALily(const FObjectInitializer& ObjectInitializer);

};

