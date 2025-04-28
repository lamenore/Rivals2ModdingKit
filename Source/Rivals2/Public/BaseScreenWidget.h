#pragma once
#include "CoreMinimal.h"
#include "ClientBehavior.h"
#include "EInputMode.h"
#include "EMenuNavigationType.h"
#include "ERivalsMenuState.h"
#include "RivalsMenuMusicData.h"
#include "Templates/SubclassOf.h"
#include "BaseScreenWidget.generated.h"

class UBaseScreenCursor;
class UBaseTopBar;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UBaseScreenWidget : public UClientBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputBlockAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlushInputOnOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesVirtualCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseScreenCursor> VirtualCursorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsMenuState MenuState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MenuMusicEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsMenuMusicData ScreenMusicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputMode AllowedUiInputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuNavigationType MenuNavigationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldLockMouseToViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseTopBar* BP_TopBar;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UBaseScreenCursor*> CursorWidgetByPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UWidget*> PreviousFocusWidgets;
    
public:
    UBaseScreenWidget();

};

