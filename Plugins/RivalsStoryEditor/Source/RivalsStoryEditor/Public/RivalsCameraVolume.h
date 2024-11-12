#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RivalsCameraSettings.h"
#include "RivalsCameraVolume.generated.h"

class ARivalsCamera;
class UBoxComponent;
class URivalsCameraVolumeVisual;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsCameraVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitToBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsCameraSettings CamSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsCamera* RivalsCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FollowActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CamVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsCameraVolumeVisual* CamVisual;
    
    ARivalsCameraVolume(const FObjectInitializer& ObjectInitializer);

};

