#include "settings.hpp"

void setup(void)
{
    // printf("Hello world!\n);

    // Initialize NVS
    /*
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
    {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);
    */

    // Initialize WiFi as AP
    /*
    wifi_init_softap();
    // TODO: wifi ap mode and on screen
    // ask for ssid and password of home wifi
    */
}
