add_executable(
    multi_core
    multiCoreExample.cpp
)

# Pull in our pico_stdlib which aggregates commonly used features
target_link_libraries(
    multi_core
    PRIVATE
    pico_stdlib
    hardware_adc
    pico_multicore
)

# enable usb output, disable uart output
pico_enable_stdio_usb(multi_core 1)
pico_enable_stdio_uart(multi_core 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(multi_core)