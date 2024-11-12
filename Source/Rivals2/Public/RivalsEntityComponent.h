#pragma once
#include "CoreMinimal.h"
#include "SnapNetEntityComponent.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsEntityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RIVALS2_API URivalsEntityComponent : public USnapNetEntityComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 PlayerIndex;
    
    URivalsEntityComponent(const FObjectInitializer& ObjectInitializer);

};

