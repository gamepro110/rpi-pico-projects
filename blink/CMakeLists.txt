# blink for the on-board led on pin 25
add_executable(
    blink
    blink.cpp
)

target_link_libraries(
    blink
    PRIVATE
    pico_stdlib
)

# blink for external led on pin 0
add_executable(
    blink_ex
    blink_ex.cpp
)

target_link_libraries(
    blink_ex
    PRIVATE
    pico_stdlib
)

# blink for on-board and external led (pin number havent changed)
add_executable(
    blink_both
    blink_both.cpp
)

target_link_libraries(
    blink_both
    pico_stdlib
)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(blink)
pico_add_extra_outputs(blink_ex)
pico_add_extra_outputs(blink_both)