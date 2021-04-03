add_executable(
    i2c_scanner
    i2c-scanner.cpp
)

# Pull in our pico_stdlib which aggregates commonly used features
target_link_libraries(
    i2c_scanner
    PRIVATE
    pico_stdlib
    hardware_i2c
)

# enable usb output, disable uart output
pico_enable_stdio_usb(i2c_scanner 1)
pico_enable_stdio_uart(i2c_scanner 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(i2c_scanner)