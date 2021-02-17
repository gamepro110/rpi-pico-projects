#include "pico/stdlib.h"

#define GPIO_PWR_ON 1
#define GPIO_PWR_OFF 0

int main()
{
    const uint led_pin{0};
    gpio_init(led_pin);
    gpio_set_dir(led_pin, GPIO_OUT);

    while (true)
    {
        gpio_put(led_pin, GPIO_PWR_ON);
        sleep_ms(200);
        gpio_put(led_pin, GPIO_PWR_OFF);
        sleep_ms(200);
    }
}