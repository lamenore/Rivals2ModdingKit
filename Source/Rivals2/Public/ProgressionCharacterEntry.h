#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateColor.h"
#include "Blueprint/UserWidget.h"
#include "ProgressionCharacterEntry.generated.h"

class UCanvasPanel;
class UImage;
class UProgressBar;
class URivalsButtonWidget;
class URivalsCharacterDefinition;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UProgressionCharacterEntry : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_HoveredPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_NormalPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_CharacterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* BP_XpProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_CharacterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_ButtonInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor BP_CharacterNameNormalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor BP_CharacterNameHoverColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsCharacterDefinition* CharacterDefinition;
    
public:
    UProgressionCharacterEntry();

    UFUNCTION(BlueprintCallable)
    void OnUnhoveredByPlayer(const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedByPlayer(const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    UWidget* OnNavigateButtons(EUINavigation InNavigation);
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredByPlayer(const int32 PlayerIndex);
    
};

