// #include <stdio.h>
#include "services/setup.cpp"

#define delay(ms) vTaskDelay(pdMS_TO_TICKS(ms))

void app_main(void)
{
    setup();
    while (1)
    {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }

    // return 0;
}


// TODO: use espressif BSP for M5Dial ? https://components.espressif.com/components/espressif/m5dial
