
#include "esp_now_com.hpp"

esp_now_com::esp_now_com(uint8_t D0, uint8_t D1, uint8_t D2, uint8_t D3, uint8_t D4, uint8_t D5) {
    mac_peer1[0] = D0;
    mac_peer1[1] = D1;
    mac_peer1[2] = D2;
    mac_peer1[3] = D3;
    mac_peer1[4] = D4;
    mac_peer1[5] = D5;
}

void esp_now_com::OnDataSend(int device, bool power, int slider) {
    
  message msg;
  msg.device_local = device;
  msg.power_local = power;
  msg.slider_local = slider;
  esp_now_send(NULL, (uint8_t *) &msg, sizeof(msg));
  //delay(2000);
}

void esp_now_com::OnDataRecv(const uint8_t * mac, const uint8_t *incomingData, int len) {
    message received_msg;
    memcpy(&received_msg, incomingData, sizeof(received_msg));



    QueueHandle_t queue;
    queue = xQueueCreate( 10, sizeof( int ) );
    if(queue == NULL){
    Serial.println("Error creating the queue");
    if(queue == NULL)return;
 
    for(int i = 0; i<10; i++){
        xQueueSend(queue, &i, portMAX_DELAY);
    }
    
    int element;
    
    for(int i = 0; i<10; i++){
        xQueueReceive(queue, &element, portMAX_DELAY);
        Serial.print(element);
        Serial.print("|");
    }

  }

    //Serial.print("Bytes received: ");
    //Serial.println(len);
    //Serial.print("Device: ");
    //Serial.println(received_msg.device_local);
    //Serial.print("Power: ");
    //Serial.println(received_msg.power_local);
    //Serial.print("Slider value: ");
    //Serial.println(received_msg.slider_local);
    //Serial.println();
}

esp_err_t esp_now_com::init () {
    WiFi.mode(WIFI_STA);
    
    // Error Handling
    esp_err_t error = ESP_OK;

    // Initializing the ESP-NOW  
    error = esp_now_init();

    if(error == ESP_OK) {
        // Register peer
        esp_now_peer_info_t peer1;
        memset(&peer1, 0, sizeof(peer1));
        memcpy(peer1.peer_addr, mac_peer1, 6);
        peer1.channel = 0;
        peer1.encrypt = 0;
        // Register the peer
        error = esp_now_add_peer(&peer1);
    }

    if(error == ESP_OK) {
        error = esp_now_register_recv_cb(OnDataRecv);
    }
    return error;
}

