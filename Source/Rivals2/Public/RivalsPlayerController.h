#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "SnapNetSamplePlayerController.h"
#include "ERivalsAirGrabParrySetting.h"
#include "ERivalsRightStickSetting.h"
#include "RivalsPlayerController.generated.h"

class UTexture2D;
class UWidget;

UCLASS(Blueprintable)
class RIVALS2_API ARivalsPlayerController : public ASnapNetSamplePlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardPressSecondsMax;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardPressThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpwardHardPressThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftPressThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightStickThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsRightStickSetting RightStickSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsAirGrabParrySetting AirGrabSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsAirGrabParrySetting AirParrySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRumbleEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTapJumpEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTapStrongEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTapWalljumpEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRightStickPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUIHorizontalPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUIVerticalPressed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAcceptDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBackDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAction3Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAction4Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGCCSelectDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDownHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLeftHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRightHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUpHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLeftTriggerPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLeftTriggerSpringless;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRightTriggerPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRightTriggerSpringless;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWalkButtonDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondsDownPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondsLeftPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondsRightPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondsUpPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondsStartPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondsSelectPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ShareStockCooldownTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCursorEnabled;
    
public:
    ARivalsPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockCursor();
    
    UFUNCTION(BlueprintCallable)
    void ShowCursor();
    
    UFUNCTION(BlueprintCallable)
    void SetCursorToCenterScreen();
    
    UFUNCTION(BlueprintCallable)
    void SetCursorToCenterOfWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void RumbleController(const float& Intensity, const float& Duration);
    
    UFUNCTION(BlueprintCallable)
    void LockCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorEnabled();
    
    UFUNCTION(BlueprintCallable)
    void HideCursor();
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetSecondsStartPressed();
    
    UFUNCTION(BlueprintCallable)
    float GetSecondsSelectPressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightStickVerticalValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightStickHorizontalValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetMyPlayerColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveVerticalValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveHorizontalValue() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FKey> GetKeysForActionMapping(const FName& ActionName, bool IncludeUIMappings);
    
    UFUNCTION(BlueprintCallable)
    TMap<FKey, UTexture2D*> GetIconsForInputDevice();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetIconForDeviceKey(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCursorPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetControllerName() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableVirtualCursor(bool bLeftAnalogStick);
    
    UFUNCTION(BlueprintCallable)
    void DisableVirtualCursor();
    
    UFUNCTION(BlueprintCallable)
    void ApplyControllerSettings();
    
};

