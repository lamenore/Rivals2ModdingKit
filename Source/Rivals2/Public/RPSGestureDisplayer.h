#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "RPSGesture.h"
#include "RPSSide.h"
#include "RivalsWidget.h"
#include "RPSGestureDisplayer.generated.h"

class ARivalsPlayerController;
class UImage;
class UTextBlock;
class UTexture2D;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URPSGestureDisplayer : public URivalsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<RPSGesture> CurrentHandDisplayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<RPSSide> DisplaySide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_InputButtonSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_HandGestureSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_HandGestureTextSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_InputDisplayTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_InputDisplayGamepadButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_InputDisplayKeyCapButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_GestureRockImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_GesturePaperImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_GestureScissorsImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, UTexture2D*> KeycapSpriteOverrideMap;
    
    URPSGestureDisplayer();

    UFUNCTION(BlueprintCallable)
    void SetupInputDisplay(ARivalsPlayerController* PlayerController, bool IsDesignTime);
    
};

