#pragma once
#include "CoreMinimal.h"
#include "SettingsMenuTabInterface.h"
#include "SettingsMenuGameplay.generated.h"

class USettingsMenuRow;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API USettingsMenuGameplay : public USettingsMenuTabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_SetControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_ScreenShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_CharacterOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_TeamOutlines;
    
public:
    USettingsMenuGameplay();

};

