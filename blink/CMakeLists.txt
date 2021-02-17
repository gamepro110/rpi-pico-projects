# blink for the internal led on pin 25
add_executable(
    blink
    blink.cpp
)

add_executable(
    blink_ex
    blink_ex.cpp
)

add_executable(
    blink_both
    blink_both.cpp
)

target_link_libraries(
    blink
    pico_stdlib
)

target_link_libraries(
    blink_ex
    pico_stdlib
)
    
target_link_libraries(
    blink_both
    pico_stdlib
)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(blink)
pico_add_extra_outputs(blink_ex)
pico_add_extra_outputs(blink_both)