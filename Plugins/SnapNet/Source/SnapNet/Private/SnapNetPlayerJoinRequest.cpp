#include "SnapNetPlayerJoinRequest.h"

USnapNetPlayerJoinRequest::USnapNetPlayerJoinRequest() {
    this->Complete = false;
    this->LocalPlayerIndex = 0;
}

void USnapNetPlayerJoinRequest::CompletePlayerJoin(int32 ErrorCode) {
}



