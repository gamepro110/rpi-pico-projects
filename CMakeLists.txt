cmake_minimum_required(VERSION 3.13)

# Inititialize pico-sdk from submodule
# Note: This must happen before project()
include(vendor/pico_sdk/pico_sdk_init.cmake)

project(rpi_pico_projects)

#initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# all projects below
add_subdirectory(blink)
add_subdirectory(print)
add_subdirectory(slide_potentiometer)
add_subdirectory(lux_sensor)
add_subdirectory(i2c-seeker)
add_subdirectory(multi-core-example)

# list of target libs
# * pico_stdlib (standard lib, always include (unless u know what you`re doing))

# * pico_multicore
# * |-- fifo
# * pico_sync
# * |-- critical_section
# * |-- mutex
# * |-- sem
# * pico_time
# * |-- timestamp
# * |-- sleep
# * |-- alarm
# * |-- repeating_timer
# * pico_unique_id
# * pico_util
# * |-- datetime
# * |-- pheap
# * |-- queue

# * hardware_adc
# * hardware_base
# * hardware_claim
# * hardware_clocks
# * hardware_divider
# * hardware_dma
# * |-- channel_config
# * hardware_flash
# * hardware_gpio
# * hardware_i2c
# * hardware_interp
# * |-- interp_config
# * hardware_irq
# * hardware_pio
# * |-- sm_config
# * hardware_pll
# * hardware_pwm
# * hardware_resets
# * hardware_rtc
# * hardware_spi
# * hardware_sync
# * hardware_timer
# * hardware_uart
# * hardware_vreg
# * hardware_watchdog
# * hardware_xosc

# enable usb output, disable uart output
#pico_enable_stdio_usb(slide 1)
#pico_enable_stdio_uart(slide 0)