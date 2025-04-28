#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameOutroWidget.generated.h"

class URivalsExpressiveTextWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UGameOutroWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ClearTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GameTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GameOverTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsExpressiveTextWidget* BP_BodyText;
    
    UGameOutroWidget();

    UFUNCTION(BlueprintCallable)
    void OnMatchEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameOver();
    
};

