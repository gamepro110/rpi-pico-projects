#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

enum class SteperDirection{
    stop,
    clockWise,
    antiClockWise,
};

#define m_motEnable 0
#define m_mot1 1
#define m_mot2 2

void TurnStepperMotor(int time, SteperDirection dir);

int main() {

    stdio_init_all();
    
    gpio_init(m_motEnable);
    gpio_set_dir(m_motEnable, GPIO_OUT);
    gpio_init(m_mot1);
    gpio_set_dir(m_mot1, GPIO_OUT);
    gpio_init(m_mot2);
    gpio_set_dir(m_mot2, GPIO_OUT);

    while (true)
    {
        printf("clockwise\n");
        gpio_put(m_motEnable, 1);
        gpio_put(m_mot1, 1);
        gpio_put(m_mot2, 0);
        sleep_ms(10);

        printf("stop\n");
        gpio_put(m_motEnable, 0);
        sleep_ms(10);

        printf("anti-clockwise\n");
        gpio_put(m_motEnable, 1);
        gpio_put(m_mot1, 0);
        gpio_put(m_mot2, 1);
        sleep_ms(10);

        printf("stop\n");
        gpio_put(m_motEnable, 0);
        sleep_ms(10);
    }

    return 0;
}

void TurnStepperMotor(int time, SteperDirection dir) { // TODO continue this
    switch (dir)
    {
    case SteperDirection::stop:
        gpio_put(m_motEnable, 0);
        break;
    case SteperDirection::clockWise:
        gpio_put(m_motEnable, 1);
        break;
    case SteperDirection::antiClockWise:
        gpio_put(m_motEnable, 1);
        break;
    
    default:
        break;
    }
}