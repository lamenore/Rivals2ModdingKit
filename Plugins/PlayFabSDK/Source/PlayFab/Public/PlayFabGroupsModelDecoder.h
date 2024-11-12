#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GroupsApplyToGroupResponse.h"
#include "GroupsCreateGroupResponse.h"
#include "GroupsCreateGroupRoleResponse.h"
#include "GroupsEmptyResponse.h"
#include "GroupsGetGroupResponse.h"
#include "GroupsInviteToGroupResponse.h"
#include "GroupsIsMemberResponse.h"
#include "GroupsListGroupApplicationsResponse.h"
#include "GroupsListGroupBlocksResponse.h"
#include "GroupsListGroupInvitationsResponse.h"
#include "GroupsListGroupMembersResponse.h"
#include "GroupsListMembershipOpportunitiesResponse.h"
#include "GroupsListMembershipResponse.h"
#include "GroupsUpdateGroupResponse.h"
#include "GroupsUpdateGroupRoleResponse.h"
#include "PlayFabGroupsModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabGroupsModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabGroupsModelDecoder();

    UFUNCTION(BlueprintCallable)
    static FGroupsUpdateGroupRoleResponse decodeUpdateGroupRoleResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsUpdateGroupResponse decodeUpdateGroupResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsListMembershipResponse decodeListMembershipResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsListMembershipOpportunitiesResponse decodeListMembershipOpportunitiesResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsListGroupMembersResponse decodeListGroupMembersResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsListGroupInvitationsResponse decodeListGroupInvitationsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsListGroupBlocksResponse decodeListGroupBlocksResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsListGroupApplicationsResponse decodeListGroupApplicationsResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsIsMemberResponse decodeIsMemberResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsInviteToGroupResponse decodeInviteToGroupResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsGetGroupResponse decodeGetGroupResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsCreateGroupRoleResponse decodeCreateGroupRoleResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsCreateGroupResponse decodeCreateGroupResponseResponse(UPlayFabJsonObject* Response);
    
    UFUNCTION(BlueprintCallable)
    static FGroupsApplyToGroupResponse decodeApplyToGroupResponseResponse(UPlayFabJsonObject* Response);
    
};

