#include "stdio.h"
#include "pico/stdlib.h"
#include "hardware/i2c.h"

#define I2C_PORT i2c0

const int addr = 0x23;

bool gy30Init();
float MesureLux();
uint8_t meh{ 0 };

int main() {
    stdio_init_all();
    i2c_init(I2C_PORT, 400000);
    gpio_set_function(0, GPIO_FUNC_I2C);
    gpio_set_function(1, GPIO_FUNC_I2C);
    gpio_pull_up(0);
    gpio_pull_up(1);
    // init gy-30

    if (!gy30Init()) {
        while (true) {
            printf("\raddr: %d - %a failed to init.", meh, meh);
            sleep_ms(10000);
        }
    }

    uint16_t lux{ 0 };

    while(true) {
        lux = MesureLux();
        printf("\r>> %d lux", lux);
        sleep_ms(100);
    }
}

bool gy30Init() {
    sleep_ms(1000);
    uint8_t reg = 0x23;
    uint8_t chipId[1];
    i2c_write_blocking(I2C_PORT, addr, &reg, 1, true);
    i2c_write_blocking(I2C_PORT, addr, chipId, 1, true);
    meh = chipId[0];
    printf("<<%a\n", chipId[0]);
    //if (chipId[0] != )
    return false;
}

float MesureLux() {
    return 1;
}