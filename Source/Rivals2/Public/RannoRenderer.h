#pragma once
#include "CoreMinimal.h"
#include "RivalsCharacterRenderer.h"
#include "RannoRenderer.generated.h"

class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class RIVALS2_API ARannoRenderer : public ARivalsCharacterRenderer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TongueMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TongueOutlineMeshComponent;
    
    ARannoRenderer(const FObjectInitializer& ObjectInitializer);

};

