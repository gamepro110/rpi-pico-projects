# lux for the internal led on pin 25
add_executable(
    lux
    lux.cpp
)

# Pull in our pico_stdlib which aggregates commonly used features
target_link_libraries(
    lux
    PRIVATE
    pico_stdlib
    hardware_i2c
)

# enable usb output, disable uart output
pico_enable_stdio_usb(lux 1)
pico_enable_stdio_uart(lux 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(lux)
