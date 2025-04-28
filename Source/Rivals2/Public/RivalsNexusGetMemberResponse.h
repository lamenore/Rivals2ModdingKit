#pragma once
#include "CoreMinimal.h"
#include "RivalsNexusCodeObject.h"
#include "RivalsNexusGetMemberResponse.generated.h"

USTRUCT(BlueprintType)
struct FRivalsNexusGetMemberResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString groupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsNexusCodeObject> codes;
    
    RIVALS2_API FRivalsNexusGetMemberResponse();
};

