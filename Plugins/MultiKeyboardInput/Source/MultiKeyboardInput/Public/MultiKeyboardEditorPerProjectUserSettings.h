#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "MultiKeyboardEditorPerProjectUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class MULTIKEYBOARDINPUT_API UMultiKeyboardEditorPerProjectUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRunInEditor;
    
    UMultiKeyboardEditorPerProjectUserSettings();

};

