#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "EventsCreateTelemetryKeyRequest.h"
#include "EventsCreateTelemetryKeyResponse.h"
#include "EventsDeleteTelemetryKeyRequest.h"
#include "EventsDeleteTelemetryKeyResponse.h"
#include "EventsGetTelemetryKeyRequest.h"
#include "EventsGetTelemetryKeyResponse.h"
#include "EventsListTelemetryKeysRequest.h"
#include "EventsListTelemetryKeysResponse.h"
#include "EventsSetTelemetryKeyActiveRequest.h"
#include "EventsSetTelemetryKeyActiveResponse.h"
#include "EventsWriteEventsRequest.h"
#include "EventsWriteEventsResponse.h"
#include "OnPlayFabEventsRequestCompletedDelegate.h"
#include "PlayFabBaseModel.h"
#include "PlayFabError.h"
#include "PlayFabEventsAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabEventsAPI;
class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabEventsAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessWriteTelemetryEvents, FEventsWriteEventsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessWriteEvents, FEventsWriteEventsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessSetTelemetryKeyActive, FEventsSetTelemetryKeyActiveResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessListTelemetryKeys, FEventsListTelemetryKeysResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetTelemetryKey, FEventsGetTelemetryKeyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteTelemetryKey, FEventsDeleteTelemetryKeyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateTelemetryKey, FEventsCreateTelemetryKeyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabEventsRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabEventsAPI();

    UFUNCTION(BlueprintCallable)
    static UPlayFabEventsAPI* WriteTelemetryEventsWithTelemetryKey(FEventsWriteEventsRequest Request, const FString& telemetryKey, UPlayFabEventsAPI::FDelegateOnSuccessWriteTelemetryEvents onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEventsAPI* WriteTelemetryEvents(FEventsWriteEventsRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessWriteTelemetryEvents onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEventsAPI* WriteEvents(FEventsWriteEventsRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessWriteEvents onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEventsAPI* SetTelemetryKeyActive(FEventsSetTelemetryKeyActiveRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessSetTelemetryKeyActive onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEventsAPI* ListTelemetryKeys(FEventsListTelemetryKeysRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessListTelemetryKeys onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperWriteTelemetryEvents(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperWriteEvents(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperSetTelemetryKeyActive(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperListTelemetryKeys(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetTelemetryKey(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteTelemetryKey(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateTelemetryKey(FPlayFabBaseModel Response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEventsAPI* GetTelemetryKey(FEventsGetTelemetryKeyRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessGetTelemetryKey onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEventsAPI* DeleteTelemetryKey(FEventsDeleteTelemetryKeyRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessDeleteTelemetryKey onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabEventsAPI* CreateTelemetryKey(FEventsCreateTelemetryKeyRequest Request, UPlayFabEventsAPI::FDelegateOnSuccessCreateTelemetryKey onSuccess, UPlayFabEventsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

