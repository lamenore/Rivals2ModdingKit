#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SnapNetSampleSessionListItem.generated.h"

UCLASS(Blueprintable)
class USnapNetSampleSessionListItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString ConnectString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString OwningUserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 searchResultIndex;
    
    USnapNetSampleSessionListItem();

};

