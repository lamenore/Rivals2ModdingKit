#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientLoginWithGoogleAccountRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLoginWithGoogleAccountRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CreateAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EncryptedRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* InfoRequestParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerSecret;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerAuthCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetEmail;
    
    FClientLoginWithGoogleAccountRequest();
};

