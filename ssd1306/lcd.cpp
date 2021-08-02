#include "ssd1306.h"

#include "pico/stdlib.h"
#include "hardware/i2c.h"

#include <stdio.h>

int main() {
    ssd1306 m_lcd{};
    stdio_init_all();
    i2c_init(0, 400000);
    //gpio_set_function()
    m_lcd.Init();

    while (true)
    {
        printf("");
    }
}