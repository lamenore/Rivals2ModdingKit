#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExText_ColoredMessage.h"
#include "ExpressiveTextDebugger.generated.h"

UCLASS(Abstract, Blueprintable)
class AExpressiveTextDebugger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExText_ColoredMessage> AllStylesStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExText_ColoredMessage> AllFontsStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExText_ColoredMessage> Logs;
    
    AExpressiveTextDebugger(const FObjectInitializer& ObjectInitializer);

};

