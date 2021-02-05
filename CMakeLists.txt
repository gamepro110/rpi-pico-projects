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