#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EValueType.h"
#include "TrainingMenuRow.generated.h"

class ARivalsPlayerController;
class UBorder;
class UImage;
class UMaterialInstance;
class URivalsButtonWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTrainingMenuRow : public UUserWidget {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* HoveredMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* DefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EValueType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NumberValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNumberValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNumberValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoolValue;
    
    UTrainingMenuRow();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateSetting();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNumberValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFocused(bool NewHasFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentIndex(int32 Index);
    
private:
    UFUNCTION(BlueprintCallable)
    void SelectPreviousOption();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextOption();
    
    UFUNCTION(BlueprintCallable)
    void OnRightArrowReleased(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLostFocusByPlayer(const int32 UserIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLeftStickRight(ARivalsPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void OnLeftStickLeft(ARivalsPlayerController* Controller);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLeftArrowReleased(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumber(float Amount);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasFocus();
    
    UFUNCTION(BlueprintCallable)
    FText GetDefaultValue();
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentStringValue();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentNumberValue();
    
private:
    UFUNCTION(BlueprintCallable)
    void DecrementNumber(float Amount);
    
};

