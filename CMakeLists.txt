cmake_minimum_required(VERSION 3.16)

# Inititialize pico-sdk from submodule
# Note: This must happen before project()
include(vendor/pico_sdk/pico_sdk_init.cmake)

project(rpi_pico_projects)

#initialize the Raspberry Pi Pico SDK
pico_sdk_init()

set(vendorPath "${PROJECT_SOURCE_DIR}/vendor")

add_subdirectory(vendor)

# all projects below
add_subdirectory(blink)
add_subdirectory(print)
add_subdirectory(slide_potentiometer)
add_subdirectory(lux_sensor)
add_subdirectory(multi-core-example)
add_subdirectory(ssd1306)
add_subdirectory(steperMotor)
add_subdirectory(interupt_test)

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

# * hardware
# * |-- adc
# * |-- base
# * |-- claim
# * |-- clocks
# * |-- divider
# * |-- dma
# *     |-- channel_config
# * |-- flash
# * |-- gpio
# * |-- i2c
# * |-- interp
# *     |-- interp_config
# * |-- irq
# * |-- pio
# *     |-- sm_config
# * |-- pll
# * |-- pwm
# * |-- resets
# * |-- rtc
# * |-- spi
# * |-- sync
# * |-- timer
# * |-- uart
# * |-- vreg
# * |-- watchdog
# * |-- xosc

# enable usb output, disable uart output
#pico_enable_stdio_usb(slide 1)
#pico_enable_stdio_uart(slide 0)