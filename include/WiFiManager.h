#ifndef WIFIMANAGER_H
#define WIFIMANAGER_H

class WiFiManager {
    public: 
        WiFiManager(const char* ssid, const char* password);
        bool connect();
        bool isConnected();
        bool reconnectIfNeeded();
    
    private:
        const char* _ssid;
        const char* _password;
};

#endif