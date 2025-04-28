#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "BasePopupWidget.h"
#include "SettingsMenuWidget.generated.h"

class UCharacterSelectScreen;
class UHorizontalBox;
class UMaterialInstance;
class UMenuButtonWidget;
class URivalsSettingsSaveGame;
class USettingsMenuAudio;
class USettingsMenuGameplay;
class USettingsMenuGraphics;
class USettingsMenuMatchTab;
class USettingsMenuTabButton;
class USettingsMenuTabInterface;
class UWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API USettingsMenuWidget : public UBasePopupWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_TabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuMatchTab* BP_MatchTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuGraphics* BP_GraphicsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuAudio* BP_AudioTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuGameplay* BP_GameplayTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuTabButton* BP_GraphicsTabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuTabButton* BP_AudioTabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuTabButton* BP_GameplayTabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuTabButton* BP_MatchTabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_TabBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* HoveredThumbnailMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* DefaultThumbnailMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_ApplyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsSettingsSaveGame* CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsSettingsSaveGame* IntendedState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<USettingsMenuTabInterface*, USettingsMenuTabButton*> TabsToTabButtonsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterSelectScreen* CssParent;
    
public:
    USettingsMenuWidget();

    UFUNCTION(BlueprintCallable)
    void SetUserIndex(int32 Index);
    
private:
    UFUNCTION(BlueprintCallable)
    UWidget* OnNavigate(EUINavigation Direction);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchTabPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnGraphicsTabPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayTabPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClosePressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAudioTabPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnApplyPressed(const int32 UserIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplySettings();
    
};

