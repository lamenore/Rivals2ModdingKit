#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterLevelWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCharacterLevelWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_LevelText;
    
public:
    UCharacterLevelWidget();

};

