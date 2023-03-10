#include "esp_now_com.hpp"
#include "wrapper_esp_now_com.hpp"

esp_now_com *wrapper_esp_now_com(uint8_t D5, uint8_t D4, uint8_t D3, uint8_t D2, uint8_t D1, uint8_t D0) {
    return new esp_now_com(D5,D4,D3,D2,D1,D0);

}

esp_err_t wrapper_esp_now_init(esp_now_com *instance) {
    instance->init();
}

void wrapper_esp_now_send(esp_now_com *instance, int device, bool power, int slider) {
    instance->OnDataSend(device, power,slider);
}