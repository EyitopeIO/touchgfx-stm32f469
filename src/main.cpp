#include <mbed.h>


void touchgfx_init(void);
void touchgfx_taskEntry(void);


int main() {

    touchgfx_init();

    while(1) {

      touchgfx_taskEntry();

    }
}