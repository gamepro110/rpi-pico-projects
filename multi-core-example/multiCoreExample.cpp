#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/multicore.h"

void Core1Loop();

int main() { // check why it doenst work
    stdio_init_all();
    uint32_t num{0};
    multicore_launch_core1(Core1Loop);

    while(true) {
        multicore_fifo_push_blocking(num);
        printf("num: %d", num);
        num = multicore_fifo_pop_blocking();
    }

    return 0;
}

void Core1Loop() {
    uint32_t in = multicore_fifo_pop_blocking();
    in++;
    sleep_ms(200);
    multicore_fifo_push_blocking(in);
}