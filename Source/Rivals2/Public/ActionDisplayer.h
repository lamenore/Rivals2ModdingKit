#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERivalsBufferedInputAction.h"
#include "ActionDisplayer.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UActionDisplayer : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_ActionImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsBufferedInputAction, UTexture2D*> ActionTextures;
    
    UActionDisplayer();

    UFUNCTION(BlueprintCallable)
    void SetAction(ERivalsBufferedInputAction Action);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetActionTexture(ERivalsBufferedInputAction Action);
    
};

