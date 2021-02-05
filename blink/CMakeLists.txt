add_executable(
    blink
    blink.cpp
)

target_link_libraries(
    blink
    pico_stdlib
)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(blink)