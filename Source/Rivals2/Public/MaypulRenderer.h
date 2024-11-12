#pragma once
#include "CoreMinimal.h"
#include "RivalsCharacterRenderer.h"
#include "MaypulRenderer.generated.h"

class UPoseableMeshComponent;

UCLASS(Blueprintable)
class RIVALS2_API AMaypulRenderer : public ARivalsCharacterRenderer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* TetherMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* TetherOutlineMeshComponent;
    
    AMaypulRenderer(const FObjectInitializer& ObjectInitializer);

};

