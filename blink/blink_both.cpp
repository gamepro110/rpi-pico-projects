#include "pico/stdlib.h"

int main()
{
    const uint inledPin{ 25 };
    const uint exLedPin{ 0 };

    stdio_init_all();

    gpio_init(inledPin);
    gpio_init(exLedPin);

    gpio_set_dir(inledPin, GPIO_OUT);
    gpio_set_dir(exLedPin, GPIO_OUT);

    while (true)
    {
        gpio_put(inledPin, 1);
        gpio_put(exLedPin, 0);
        sleep_ms(200);

        gpio_put(inledPin, 0);
        gpio_put(exLedPin, 1);
        sleep_ms(200);
    }
}