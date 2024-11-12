#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERivalsMenuState.h"
#include "MenuStateChangedDelegateDelegate.h"
#include "RivalsMenu.h"
#include "RivalsMenuMusicData.h"
#include "Templates/SubclassOf.h"
#include "RivalsUIManager.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class RIVALS2_API URivalsUIManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsMenu> FullScreenMenuStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsMenuState, FRivalsMenuMusicData> MenuMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsMenuState, TSubclassOf<UUserWidget>> MenuStateWidgetClasses;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuStateChangedDelegate OnMenuStateChanged;
    
    URivalsUIManager();

    UFUNCTION(BlueprintCallable)
    void OnAnyInputPressed(int32 LocalPlayerIndex);
    
};

