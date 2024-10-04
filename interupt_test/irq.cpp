#include "stdio.h"
#include "pico/stdlib.h"
#include "pico/stdio.h"
#include "hardware/irq.h"
#include "hardware/regs/intctrl.h"

void OnSimpleInterupt();

int main()
{
    bool run{ true };
    const uint pinNR{ 0 };

    stdio_init_all();
    gpio_init(pinNR);
    gpio_set_dir(pinNR, GPIO_IN);

    sleep_ms(10*1000);

    //irq_set_exclusive_handler(
    //    USBCTRL_IRQ,
    //    &OnSimpleInterupt
    //);

    while(run) {
        printf("run: %s\n", (run ? "True" : "False"));
        sleep_ms(1000);
    }
    
    printf("stoped running...\n");
}

void OnSimpleInterupt() {
    // do things
    //run = false;
}