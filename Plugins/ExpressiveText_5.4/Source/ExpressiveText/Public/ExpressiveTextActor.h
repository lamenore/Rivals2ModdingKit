#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExpressiveTextActor.generated.h"

class UExpressiveTextComponent;

UCLASS(Blueprintable)
class EXPRESSIVETEXT_API AExpressiveTextActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExpressiveTextComponent* ExpressiveTextComponent;
    
    AExpressiveTextActor(const FObjectInitializer& ObjectInitializer);

};

