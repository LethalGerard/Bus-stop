#include "AppController.h"
#include "WiFiManager.h"
#include "secrets.h"

WiFiManager wifiManager(WIFI_SSID, WIFI_PASSWORD);

void appInit()
{

}

void appRun()
{
    if (!wifiManager.reconnectIfNeeded()) return;
}