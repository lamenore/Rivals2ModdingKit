#pragma once
#include "CoreMinimal.h"
#include "RivalsMenuButtonWidget.h"
#include "LobbyEntryWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API ULobbyEntryWidget : public URivalsMenuButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_CurrentPlayerCountTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_MaxPlayerCountTextBlock;
    
public:
    ULobbyEntryWidget();

};

