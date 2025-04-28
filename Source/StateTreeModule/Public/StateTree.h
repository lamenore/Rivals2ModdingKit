#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PropertyBag.h"
#include "InstancedStructContainer.h"
#include "CompactStateTransition.h"
#include "CompactStateTreeState.h"
#include "StateTreeExternalDataDesc.h"
#include "StateTreeInstanceData.h"
#include "StateTreeNodeIdToIndex.h"
#include "StateTreePropertyBindings.h"
#include "StateTreeStateIdToHandle.h"
#include "StateTreeTransitionIdToIndex.h"
#include "StateTree.generated.h"

class UStateTreeSchema;

UCLASS(Blueprintable)
class STATETREEMODULE_API UStateTree : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastCompiledEditorDataHash;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStateTreeSchema* Schema;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompactStateTreeState> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompactStateTransition> Transitions;
    
    FInstancedStructContainer Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeInstanceData DefaultInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeInstanceData SharedInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeExternalDataDesc> ContextDataDescs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyBindings PropertyBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeStateIdToHandle> IDToStateMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeNodeIdToIndex> IDToNodeMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeTransitionIdToIndex> IDToTransitionMappings;

    FInstancedPropertyBag Parameters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NumContextData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NumGlobalInstanceData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 EvaluatorsBegin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 EvaluatorsNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 GlobalTasksBegin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 GlobalTasksNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasGlobalTransitionTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeExternalDataDesc> ExternalDataDescs;
    
public:
    UStateTree();

};

