#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "StateTreeSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=StateTree)
class STATETREEMODULE_API UStateTreeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStartDebuggerTracesOnNonEditorTargets;
    
    UStateTreeSettings();

};

