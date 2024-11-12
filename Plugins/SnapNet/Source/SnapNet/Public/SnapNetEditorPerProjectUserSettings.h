#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SnapNetEditorPerProjectUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class SNAPNET_API USnapNetEditorPerProjectUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SuppressLicenseExpirationWarnings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SuppressSupportExpirationWarnings;
    
    USnapNetEditorPerProjectUserSettings();

};

