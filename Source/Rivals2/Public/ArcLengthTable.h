#pragma once
#include "CoreMinimal.h"
#include "ArcLengthTableEntry.h"
#include "ArcLengthTable.generated.h"

USTRUCT(BlueprintType)
struct FArcLengthTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArcLengthTableEntry> Entries;
    
    RIVALS2_API FArcLengthTable();
};

