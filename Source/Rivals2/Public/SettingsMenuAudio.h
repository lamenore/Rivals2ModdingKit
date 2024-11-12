#pragma once
#include "CoreMinimal.h"
#include "SettingsMenuTabInterface.h"
#include "SettingsMenuAudio.generated.h"

class USettingsMenuRow;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API USettingsMenuAudio : public USettingsMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_MasterVol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_MusicVol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_SFXVol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_UIVol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_VoiceVol;
    
    USettingsMenuAudio();

};

