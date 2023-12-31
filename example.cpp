#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"
#include "pico/binary_info.h"

#include "mcp3x08.h"

int main() {
    stdio_init_all();
    printf("Hello World!");
    sleep_ms(1000);

    mcp3x08_init();

    uint16_t data;

    while(1){
        data = mcp3208_read(0);
        printf("%d\n", data);
    }
}