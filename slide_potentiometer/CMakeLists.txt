add_executable(
    slide
    slide.cpp
)

# Pull in our pico_stdlib which aggregates commonly used features
target_link_libraries(slide
    pico_stdlib
    hardware_adc
)

# enable usb output, disable uart output
pico_enable_stdio_usb(slide 1)
pico_enable_stdio_uart(slide 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(slide)