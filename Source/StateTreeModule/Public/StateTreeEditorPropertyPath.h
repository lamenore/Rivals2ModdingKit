#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StateTreeEditorPropertyPath.generated.h"

USTRUCT(BlueprintType)
struct STATETREEMODULE_API FStateTreeEditorPropertyPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid StructID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Path;
    
    FStateTreeEditorPropertyPath();
};

