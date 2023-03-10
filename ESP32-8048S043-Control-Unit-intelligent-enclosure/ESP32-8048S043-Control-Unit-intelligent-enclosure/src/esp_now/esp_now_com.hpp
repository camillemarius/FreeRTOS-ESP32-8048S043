#pragma once

#include <Arduino.h>
#include <WiFi.h>
#include <esp_now.h>

class esp_now_com {
    public:
        esp_now_com(uint8_t D5, uint8_t D4, uint8_t D3, uint8_t D2, uint8_t D1, uint8_t D0);
        esp_err_t init();
        void OnDataSend(int device, bool power, int slider);
        static void OnDataRecv(const uint8_t * mac, const uint8_t *incomingData, int len);
       

    private:
        class message {
            public:
                int device_local;
                bool power_local;
                int slider_local;
        } ;
        // ESP8266 Mac address (first peer)
        //BC:FF:4D:39:AA:3A
        uint8_t mac_peer1[6];// = {0xBC, 0xFF, 0x4D, 0x39, 0xAA, 0x3A};

        //esp_now_peer_info_t peer1;

};