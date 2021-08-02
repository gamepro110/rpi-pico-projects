# steperMotor config

add_executable(
    steper
    src/steperExample.cpp
)

target_link_libraries(
    steper
    PRIVATE
    pico_stdlib
    hardware_adc
)

# enable usb output, disable uart output
pico_enable_stdio_usb(steper 1)
pico_enable_stdio_uart(steper 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(steper)