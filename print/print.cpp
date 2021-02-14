#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"

int main()
{
    stdio_init_all();
    adc_init();
    adc_set_temp_sensor_enabled(true);
    adc_select_input(4);

    uint16_t raw{ 0 };
    const float conversion = 3.3 / (1<<12);
    float result{ 0 };
    float temp{ 0 };

    while(true)
    {
        raw = adc_read();
        result = raw * conversion;
        temp = 27 - (result -0.706)/0.001721;
        printf("cpu: %.2f\n", temp);
        sleep_ms(1000);
    }
}