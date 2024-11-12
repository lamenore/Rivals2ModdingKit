#pragma once
#include "CoreMinimal.h"
#include "ClientSendAccountRecoveryEmailResult.h"
#include "PlayFabError.h"
#include "BasePopupWidget.h"
#include "EmailEntryPopup.generated.h"

class UCanvasPanel;
class UGenericInputFieldWidget;
class UObject;
class URivalsMenuButtonWidget;
class UScaleBox;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UEmailEntryPopup : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BP_TabSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_ErrorPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ErrorTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_PickLinkButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_PickCreateButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_PickCloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericInputFieldWidget* BP_LinkEmailField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericInputFieldWidget* BP_LinkPasswordField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_LinkLoginButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_LinkForgotButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_LinkBackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericInputFieldWidget* BP_CreateUsernameField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericInputFieldWidget* BP_CreateEmailField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericInputFieldWidget* BP_CreatePasswordField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericInputFieldWidget* BP_CreateConfirmPasswordField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_CreateCreateButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_CreateBackToLoginButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericInputFieldWidget* BP_RecoverEmailField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_RecoverSendButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_RecoverBackToLoginButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_ConfirmLinkAccountButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_BackLinkAccountButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_ConnectingToPlayFabServicesCloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_ConnectingToPlayFabServicesConnectingTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_ConnectingToPlayFabServicesFailedTextBox;
    
public:
    UEmailEntryPopup();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRecoveryEmailSent(FClientSendAccountRecoveryEmailResult Result, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void OnRecoveryEmailSendFailed(FPlayFabError Result, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void OnRecoverSendClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnRecoverBackToLoginClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnPickLinkClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnPickCreateClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnPickBackClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLoginWithEmailBeforeSteamLinkSuccess(bool bAlreadyHasSteamAccountLink);
    
    UFUNCTION(BlueprintCallable)
    void OnLoginWithEmailBeforeSteamLinkError(const FString& ErrorReport);
    
    UFUNCTION(BlueprintCallable)
    void OnLinkSteamAccountSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnLinkSteamAccountError(const FString& ErrorReport);
    
    UFUNCTION(BlueprintCallable)
    void OnLinkLoginClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLinkForgotPasswordClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLinkCreateAccountClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLinkBackClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnCreateCreateAccountClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnCreateBackToLoginClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnConnectToPlayFabServicesSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnConnectToPlayFabServicesError(const FString& ErrorReport);
    
    UFUNCTION(BlueprintCallable)
    void OnConnectingToPlayFabServicesCloseButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmLinkAccountClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnAddUsernamePasswordSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnAddUsernamePasswordError(const FString& ErrorReport);
    
};

