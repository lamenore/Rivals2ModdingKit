#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ExpressiveTextGameInstanceSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class EXPRESSIVETEXT_API UExpressiveTextGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Debugger;
    
public:
    UExpressiveTextGameInstanceSubsystem();

};

