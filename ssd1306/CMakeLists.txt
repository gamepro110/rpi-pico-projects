add_executable(
    lcd
    lcd.cpp
    ssd1306.cpp
    ssd1306.h
)

# Pull in our pico_stdlib which aggregates commonly used features
target_link_libraries(
    lcd
    PRIVATE
    pico_stdlib
    hardware_i2c
)

# enable usb output, disable uart output
pico_enable_stdio_usb(lcd 1)
pico_enable_stdio_uart(lcd 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(lcd)