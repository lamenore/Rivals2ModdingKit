#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Blueprint/UserWidget.h"
#include "EReplaySettingsType.h"
#include "ReplaySettingsRow.generated.h"

class UBorder;
class UHorizontalBox;
class UImage;
class UMaterialInstance;
class UReplaySettingsTabInterface;
class URivalsButtonWidget;
class UScaleBox;
class UTextBlock;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UReplaySettingsRow : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_LeftArrowImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_LeftArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_RightArrowImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_RightArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_SettingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_ButtonInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_RightArrowBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_LeftArrowBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_LRBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* HoveredMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* DefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TrueValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FalseValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplaySettingsType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> StringOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NumberValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoolValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntPoint> IntPointOptions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplaySettingsTabInterface* ParentTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_Activate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_Deactivate;
    
public:
    UReplaySettingsRow();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateSetting();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetParentMenu(UReplaySettingsTabInterface* InParentMenu);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentIndex(int32 Index);
    
private:
    UFUNCTION(BlueprintCallable)
    void SelectPreviousOption();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextOption();
    
    UFUNCTION(BlueprintCallable)
    void OnUnhoveredByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRightArrowReleased(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    UWidget* OnNavigate(EUINavigation Direction);
    
    UFUNCTION(BlueprintCallable)
    void OnLostFocusByPlayer(const int32 UserIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLeftStickRight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnLeftStickLeft(float Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLeftArrowReleased(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumber(float Amount);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasFocus();
    
    UFUNCTION(BlueprintCallable)
    FText GetCurrentStringValue();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentNumberValue();
    
private:
    UFUNCTION(BlueprintCallable)
    void DecrementNumber(float Amount);
    
};

