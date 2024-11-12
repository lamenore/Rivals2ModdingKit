#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RivalsPlayerProfile.h"
#include "PlayerProfileSubsystem.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UPlayerProfileSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FRivalsPlayerProfile> PlayerProfiles;
    
public:
    UPlayerProfileSubsystem();

};

