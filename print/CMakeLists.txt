add_executable(
    print
    print.cpp
)

# Pull in our pico_stdlib which aggregates commonly used features
message(">>> add comment to other cmakelists '# Pull in our pico_stdlib which aggregates commonly used features'")
target_link_libraries(print
    pico_stdlib
    hardware_adc
)

# enable usb output, disable uart output
pico_enable_stdio_usb(print 1)
pico_enable_stdio_uart(print 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(print)