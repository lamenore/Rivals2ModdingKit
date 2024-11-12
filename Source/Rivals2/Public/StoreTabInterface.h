#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StoreTabInterface.generated.h"

class UMainMenuStoreTab;
class UStoreTabButton;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UStoreTabInterface : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStoreTabButton* StoreTabButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuStoreTab* ParentMenu;
    
public:
    UStoreTabInterface();

};

