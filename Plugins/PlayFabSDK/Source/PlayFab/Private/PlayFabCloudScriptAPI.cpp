#include "PlayFabCloudScriptAPI.h"

UPlayFabCloudScriptAPI::UPlayFabCloudScriptAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::UnregisterFunction(FCloudScriptUnregisterFunctionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessUnregisterFunction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::RegisterQueuedFunction(FCloudScriptRegisterQueuedFunctionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessRegisterQueuedFunction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::RegisterHttpFunction(FCloudScriptRegisterHttpFunctionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessRegisterHttpFunction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::RegisterEventHubFunction(FCloudScriptRegisterEventHubFunctionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessRegisterEventHubFunction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::PostFunctionResultForScheduledTask(FCloudScriptPostFunctionResultForScheduledTaskRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessPostFunctionResultForScheduledTask onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::PostFunctionResultForPlayerTriggeredAction(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::PostFunctionResultForFunctionExecution(FCloudScriptPostFunctionResultForFunctionExecutionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessPostFunctionResultForFunctionExecution onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::PostFunctionResultForEntityTriggeredAction(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessPostFunctionResultForEntityTriggeredAction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::ListQueuedFunctions(FCloudScriptListFunctionsRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessListQueuedFunctions onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::ListHttpFunctions(FCloudScriptListFunctionsRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessListHttpFunctions onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::ListFunctions(FCloudScriptListFunctionsRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessListFunctions onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::ListEventHubFunctions(FCloudScriptListFunctionsRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessListEventHubFunctions onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

void UPlayFabCloudScriptAPI::HelperUnregisterFunction(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperRegisterQueuedFunction(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperRegisterHttpFunction(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperRegisterEventHubFunction(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperPostFunctionResultForScheduledTask(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperPostFunctionResultForPlayerTriggeredAction(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperPostFunctionResultForFunctionExecution(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperPostFunctionResultForEntityTriggeredAction(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperListQueuedFunctions(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperListHttpFunctions(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperListFunctions(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperListEventHubFunctions(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperGetFunction(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperExecuteFunction(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

void UPlayFabCloudScriptAPI::HelperExecuteEntityCloudScript(FPlayFabBaseModel Response, UObject* customData, bool successful) {
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::GetFunction(FCloudScriptGetFunctionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessGetFunction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::ExecuteFunction(FCloudScriptExecuteFunctionRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessExecuteFunction onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabCloudScriptAPI* UPlayFabCloudScriptAPI::ExecuteEntityCloudScript(FCloudScriptExecuteEntityCloudScriptRequest Request, UPlayFabCloudScriptAPI::FDelegateOnSuccessExecuteEntityCloudScript onSuccess, UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}


