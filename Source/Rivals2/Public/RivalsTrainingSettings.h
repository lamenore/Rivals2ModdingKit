#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "RivalsTrainingSettings.generated.h"

class AActor;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class RIVALS2_API URivalsTrainingSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TrainingGrid;
    
    URivalsTrainingSettings();

};

