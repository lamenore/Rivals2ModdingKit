#pragma once
#include "CoreMinimal.h"
#include "PlayFabLoginWithEmailAddressBeforeSteamLinkingAttemptErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayFabLoginWithEmailAddressBeforeSteamLinkingAttemptError, const FString&, ErrorReport);

