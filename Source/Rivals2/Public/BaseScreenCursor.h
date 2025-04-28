#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseScreenCursor.generated.h"

class UCssPuck;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UBaseScreenCursor : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_InnerBorderLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_InnerBorderDark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_OuterBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_BowlBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_BowlPNumText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCssPuck* BP_CSSPuck;
    
public:
    UBaseScreenCursor();

};

