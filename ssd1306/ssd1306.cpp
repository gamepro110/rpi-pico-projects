#include "ssd1306.h"

bool ssd1306::Init() {
    
    return true;
}

void ssd1306::ClearDisplay(bool pixelOff) {
    for (int i = 0; i < res; i++)
    {
        currentBuffer[i] = pixelOff;
    }
}