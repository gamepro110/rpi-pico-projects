#pragma once

#include "pico/stdlib.h"
#include "hardware/i2c.h"

#include <stdio.h>

class ssd1306 {
public:
    ssd1306() = default;
    ~ssd1306() = default;

public:
    bool Init();

    void ClearDisplay(bool pixelOff = true);

private:
    const int i2c_address = 0x3C;
    static const int screenWidth = 128;
    static const int screenHeight = 64;
    static constexpr int res = screenWidth * screenHeight;
    bool buff1[res]{ false };
    bool buff2[res]{ false };
    bool* currentBuffer = nullptr;
};