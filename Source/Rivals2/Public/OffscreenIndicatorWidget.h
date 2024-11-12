#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "OffscreenIndicatorWidget.generated.h"

class ARivalsGameplayEntity;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UOffscreenIndicatorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Portrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCharacterFacingRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsGameplayEntity* OwnerObject;
    
    UOffscreenIndicatorWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOffscreenIndicatorBlueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPointerDirection(const float Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitBlueprintForArticle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitBlueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPlayerColor() const;
    
};

