#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Rivals2_CameraEditMode.h"
#include "Rivals2_CameraMode.h"
#include "RivalsDollyCamera.generated.h"

class ACineCameraActor;
class ARivalsCamera;
class UKeyframe;
class UKeyframeManager;
class UMarkerMenuPopup;
class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class RIVALS2_API URivalsDollyCamera : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsCamera* RivalsCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMarkerMenuPopup* MarkerPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACineCameraActor* FollowCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyframeManager* KeyframeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyframe* PreviousKeyframe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<Rivals2_CameraEditMode> EditMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<Rivals2_CameraMode> CameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInMenu;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyframe* CurrentKeyframe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyframe* StoredKeyframe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyframe* TempKeyframe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusOnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowingPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCameraPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OrbitVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRendering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetSet;
    
public:
    URivalsDollyCamera();

    UFUNCTION(BlueprintCallable)
    void ToggleModifier();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFollowRail();
    
    UFUNCTION(BlueprintCallable)
    void ToggleEditMode();
    
    UFUNCTION(BlueprintCallable)
    void ToggleEditing();
    
    UFUNCTION(BlueprintCallable)
    void StartCameraFollow();
    
    UFUNCTION(BlueprintCallable)
    void SpawnFollowCamera();
    
    UFUNCTION(BlueprintCallable)
    void ShowCameraPreview();
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(bool IsTargeted);
    
    UFUNCTION(BlueprintCallable)
    void SetRoll(float Roll);
    
    UFUNCTION(BlueprintCallable)
    void SetRendering(bool NewIsRendering);
    
    UFUNCTION(BlueprintCallable)
    void SetModifier(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetInMenu(bool IsInMenu);
    
    UFUNCTION(BlueprintCallable)
    void SetFOV(float FOV);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowRail(bool NewIsFollowing);
    
    UFUNCTION(BlueprintCallable)
    void SetFocus(UKeyframe* Keyframe);
    
    UFUNCTION(BlueprintCallable)
    void SetEditMode(TEnumAsByte<Rivals2_CameraEditMode> NewEditMode);
    
    UFUNCTION(BlueprintCallable)
    void SetEditing(bool NewIsEditing);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraMode(TEnumAsByte<Rivals2_CameraMode> Mode);
    
    UFUNCTION(BlueprintCallable)
    void SeekToKeyframe(UKeyframe* Keyframe);
    
    UFUNCTION(BlueprintCallable)
    void SaveKeyframe();
    
    UFUNCTION(BlueprintCallable)
    void RollTick();
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraOrientation();
    
    UFUNCTION(BlueprintCallable)
    void RemoveFocus();
    
    UFUNCTION(BlueprintCallable)
    void PlaySequence();
    
    UFUNCTION(BlueprintCallable)
    void ManipulateSpline(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetSet();
    
    UFUNCTION(BlueprintCallable)
    bool IsRendering();
    
    UFUNCTION(BlueprintCallable)
    bool IsModifierActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsFollowing();
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusing();
    
    UFUNCTION(BlueprintCallable)
    bool IsEditing();
    
    UFUNCTION(BlueprintCallable)
    void InterpolateCamera(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void HideCameraPreview();
    
    UFUNCTION(BlueprintCallable)
    void HandleKeyframe();
    
    UFUNCTION(BlueprintCallable)
    int32 GetKeyframeIndexFromTick(int32 Tick);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<Rivals2_CameraEditMode> GetEditMode();
    
    UFUNCTION(BlueprintCallable)
    UKeyframe* GetCurrentKeyframe();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<Rivals2_CameraMode> GetCameraMode();
    
    UFUNCTION(BlueprintCallable)
    void FOVTick();
    
    UFUNCTION(BlueprintCallable)
    void FollowCameraPath(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void FocusPreviousKeyframe();
    
    UFUNCTION(BlueprintCallable)
    void FocusNextKeyframe();
    
    UFUNCTION(BlueprintCallable)
    void ExitCameraFollow();
    
    UFUNCTION(BlueprintCallable)
    void EditThirdpersonTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void EditFirstpersonTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void DrawCampathVisuals();
    
    UFUNCTION(BlueprintCallable)
    void DrawCameraPath();
    
    UFUNCTION(BlueprintCallable)
    void DrawCameraMarker(UKeyframe* Keyframe, bool Selected);
    
    UFUNCTION(BlueprintCallable)
    void DeleteKeyframe();
    
    UFUNCTION(BlueprintCallable)
    void CreateRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    UKeyframe* CanEditKeyframe();
    
    UFUNCTION(BlueprintCallable)
    void CancelEdit();
    
    UFUNCTION(BlueprintCallable)
    bool CanAddKeyframe();
    
    UFUNCTION(BlueprintCallable)
    bool CameraSequenceExists();
    
    UFUNCTION(BlueprintCallable)
    UKeyframe* AddKeyframe();
    
};

