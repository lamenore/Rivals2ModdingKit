#pragma once
#include "CoreMinimal.h"
#include "SettingsMenuTabInterface.h"
#include "SettingsMenuMatchTab.generated.h"

class USettingsMenuRow;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API USettingsMenuMatchTab : public USettingsMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_Stocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_Teams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_TeamAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_Tourney;
    
    USettingsMenuMatchTab();

};

