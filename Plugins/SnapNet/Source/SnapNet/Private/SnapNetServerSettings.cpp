#include "SnapNetServerSettings.h"

FSnapNetServerSettings::FSnapNetServerSettings() {
    this->AcceptRemoteConnections = false;
    this->Port = 0;
    this->ServerScriptClass = NULL;
}

