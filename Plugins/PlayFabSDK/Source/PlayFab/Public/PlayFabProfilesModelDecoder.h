#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProfilesGetEntityProfileResponse.h"
#include "ProfilesGetEntityProfilesResponse.h"
#include "ProfilesGetGlobalPolicyResponse.h"
#include "ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.h"
#include "ProfilesGetTitlePlayersFromProviderIDsResponse.h"
#include "ProfilesSetEntityProfilePolicyResponse.h"
#include "ProfilesSetGlobalPolicyResponse.h"
#include "ProfilesSetProfileLanguageResponse.h"
#include "PlayFabProfilesModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabProfilesModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabProfilesModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FProfilesSetProfileLanguageResponse decodeSetProfileLanguageResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesSetGlobalPolicyResponse decodeSetGlobalPolicyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesSetEntityProfilePolicyResponse decodeSetEntityProfilePolicyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesGetTitlePlayersFromProviderIDsResponse decodeGetTitlePlayersFromProviderIDsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesGetGlobalPolicyResponse decodeGetGlobalPolicyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesGetEntityProfilesResponse decodeGetEntityProfilesResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FProfilesGetEntityProfileResponse decodeGetEntityProfileResponseResponse(UPlayFabJsonObject* Response);
    
};

