#pragma once
#include "CoreMinimal.h"
#include "MainMenuTabInterface.h"
#include "Templates/SubclassOf.h"
#include "MainMenuProgressionTab.generated.h"

class UProgressionCharacterEntry;
class UProgressionHeader;
class URivalsMenuButtonWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMainMenuProgressionTab : public UMainMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UProgressionCharacterEntry> BP_CharacterEntryInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_BackDisplayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_ButtonVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressionHeader* BP_ProgressionHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UProgressionCharacterEntry*> CharacterEntryButtons;
    
public:
    UMainMenuProgressionTab();

};

