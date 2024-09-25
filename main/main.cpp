// #include <stdio.h>
#include "services/setup.cpp"

void app_main(void)
{
    setup();
    while (1)
    {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }

    // return 0;
}
