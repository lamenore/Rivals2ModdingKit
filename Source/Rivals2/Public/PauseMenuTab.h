#pragma once
#include "CoreMinimal.h"
#include "ClientBehavior.h"
#include "PauseMenuTab.generated.h"

class UPauseMenuButton;
class UPauseMenuPopup;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPauseMenuTab : public UClientBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_ButtonContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuPopup* ParentMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPauseMenuButton* ButtonToFocus;
    
public:
    UPauseMenuTab();

};

