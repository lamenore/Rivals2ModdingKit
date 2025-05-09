#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ERivalsMenuState.h"
#include "RivalsUIManagerSubsystem.generated.h"

class UBasePopupWidget;
class UBaseScreenWidget;
class UMatchHUDWidget;
class UUIAssetMaps;
class UWidget;

UCLASS(Blueprintable)
class RIVALS2_API URivalsUIManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseScreenWidget* CurrentScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartupMovieLoaded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIAssetMaps* AssetMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBasePopupWidget*> OpenDialogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInTextEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FocusLockedToViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* PreviousFocusWidget;
    
public:
    URivalsUIManagerSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMatchHUDWidget* GetHUDIfActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBasePopupWidget* GetCurrentPopup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsMenuState GetCurrentMenuState() const;
    
};

