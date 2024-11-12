#include "RivalsCamera.h"
#include "Components/SceneCaptureComponent2D.h"

ARivalsCamera::ARivalsCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->isFreeCam = false;
    this->FreeCamSpeed = 2000.00f;
    this->FreeCamRotate = 20.00f;
    this->AnchorActor = NULL;
    this->ReplayTimeline = NULL;
    this->DollyCamera = NULL;
    this->ForsburnSmokeCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("ForsburnSmokeCaptureComponent"));
    this->FreePlayerController = NULL;
    this->SavedCameraFov = 0.00f;
    this->ForsburnSmokeCaptureComponent->SetupAttachment(RootComponent);
}

void ARivalsCamera::SetRivalsCameraTransform(FTransform Transform) {
}


