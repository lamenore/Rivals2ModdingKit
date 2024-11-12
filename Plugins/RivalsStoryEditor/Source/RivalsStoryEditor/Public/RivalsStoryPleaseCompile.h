#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertySoftObjectPath.h"
#include "RivalsStoryEntity.h"
#include "RivalsStoryToggleInterface.h"
#include "RivalsStoryPleaseCompile.generated.h"

class UBehaviorTree;
class UBehaviorTreeComponent;
class UBillboardComponent;
class UBlackboardComponent;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsStoryPleaseCompile : public ARivalsStoryEntity, public IRivalsStoryToggleInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* EditorSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehTreeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertySoftObjectPath DialogTreePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* DialogTree;
    
    ARivalsStoryPleaseCompile(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

