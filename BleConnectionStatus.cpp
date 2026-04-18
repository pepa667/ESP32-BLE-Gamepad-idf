#include "BleConnectionStatus.h"
#include "NimBLELog.h"

static const char* LOG_TAG = "BleConnectionStatus";

BleConnectionStatus::BleConnectionStatus(void)
{
}

<<<<<<< HEAD
void BleConnectionStatus::onConnect(NimBLEServer *pServer, NimBLEConnInfo& connInfo)
{
    NIMBLE_LOGD(LOG_TAG, "onConnect - Connected Address: %s", std::string(connInfo.getAddress()).c_str());
    pServer->updateConnParams(connInfo.getConnHandle(), 6, 7, 0, 600);
}

void BleConnectionStatus::onDisconnect(NimBLEServer* pServer, NimBLEConnInfo& connInfo, int reason)
=======
void BleConnectionStatus::onConnect(NimBLEServer* pServer, NimBLEConnInfo& connInfo)
{
    pServer->updateConnParams(connInfo.getConnHandle(), 6, 7, 0, 600);
    this->connected = true;
}

void BleConnectionStatus::onDisconnect(NimBLEServer *pServer, NimBLEConnInfo& connInfo, int reason)
>>>>>>> 84a98055b6900cbf670c492410358db52bc83bd2
{
    NIMBLE_LOGD(LOG_TAG, "onDisconnectConnect - Disconnected Address: %s", std::string(connInfo.getAddress()).c_str());
    this->connected = false;
}

void BleConnectionStatus::onAuthenticationComplete(NimBLEConnInfo& connInfo)
{
    NIMBLE_LOGD(LOG_TAG, "onAuthenticationComplete - Authenticated Address: %s", std::string(connInfo.getAddress()).c_str());
    this->connected = true;
}
