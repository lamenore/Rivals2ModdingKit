#pragma once
#include "CoreMinimal.h"
#include "ClientBehavior.h"
#include "FreeCamWidget.generated.h"

class ARivalsCamera;
class UCameraComponent;
class UTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UFreeCamWidget : public UClientBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsCamera* RivalsCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_ControlsBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_LockCameraText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_FollowPlayerText;
    
    UFreeCamWidget();

    UFUNCTION(BlueprintCallable)
    void ToggleHUD();
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool IsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowPlayer(bool FollowPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoomingOut();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoomingIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingDown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZoomDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFOV();
    
};

