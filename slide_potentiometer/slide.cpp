#include "stdio.h"
#include "pico/stdlib.h"
#include "hardware/adc.h"

int main() {
    stdio_init_all();

    adc_init();
    adc_select_input(0);

    uint16_t raw{ 0 };
    float refined{ 0 };

    while(true)
    {
        raw = adc_read();
        refined = raw / (float)4095;
        printf("\rval: %.2f", refined);
        sleep_ms(100);
    }
}

/*
specifier       Output	                                    Example
d or i	        Signed decimal integer	                    392
u               Unsigned decimal integer	                7235
o               Unsigned octal	                            610
x               Unsigned hexadecimal integer	            7fa
X               Unsigned hexadecimal integer (uppercase)	7FA
f               Decimal floating point, lowercase	        392.65
F               Decimal floating point, uppercase	        392.65
e               Scientific notation (mantissa/exponent), lowercase	3.9265e+2
E               Scientific notation (mantissa/exponent), uppercase	3.9265E+2
g               Use the shortest representation: %e or %f	392.65
G               Use the shortest representation: %E or %F	392.65
a               Hexadecimal floating point, lowercase	    -0xc.90fep-2
A               Hexadecimal floating point, uppercase	    -0XC.90FEP-2
c               Character	                                a
s               String of characters	                    sample
p               Pointer address	                            b8000000
n               Nothing printed.
                The corresponding argument must be a pointer to a signed int.
                The number of characters written so far is stored in the pointed location.	
%	            A % followed by another % character will write a single % to the stream.	%
*/