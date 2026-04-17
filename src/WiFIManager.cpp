#include "WiFiManager.h"
#include <WiFi.h>

WiFiManager::WiFiManager(const char *ssid, const char *password)
{
    this->_ssid = ssid;
    this->_password = password;
}

// Returns true or false if connected to WiFi or not
bool WiFiManager::isConnected()
{
    return (WiFi.status() == WL_CONNECTED);
}

bool WiFiManager::connect()
{
    auto startTime = millis();
    WiFi.begin(_ssid, _password);
    while (!isConnected() && (millis() - startTime) < 5000)
    {
        delay(100);
    }
    return isConnected();
}

bool WiFiManager::reconnectIfNeeded()
{
    if (isConnected())
    {
        return true;
    } else {
        return connect();
    }
}