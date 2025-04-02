#pragma once
#include "CoreMinimal.h"
#include "NexusBountydata_Struct_Element.h"
#include "NexusBountyprogress_Struct.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountyprogress_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentPageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 totalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNexusBountydata_Struct_Element> Data;
    
    NEXUSUNREALSDK_API FNexusBountyprogress_Struct();
};

