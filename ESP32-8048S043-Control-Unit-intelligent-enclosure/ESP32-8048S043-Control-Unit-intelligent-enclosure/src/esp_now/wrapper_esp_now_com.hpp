#ifdef __cplusplus
class esp_now_com;
extern "C" {
#else
struct esp_now_com;
typedef struct event_listener esp_now_com;
#endif

esp_now_com *wrapper_esp_now_com(uint8_t D5, uint8_t D4, uint8_t D3, uint8_t D2, uint8_t D1, uint8_t D0);

esp_err_t wrapper_esp_now_init(esp_now_com *instance);
void wrapper_esp_now_send(esp_now_com *instance, int device, bool power, int slider);
#ifdef __cplusplus
}
#endif