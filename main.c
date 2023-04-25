#include "gpio.h"
#include "gpiote.h"
#include "ppi.h"


int main() {
    
    init_GPIOE();
    init_PPI();

    // Main loop
    while(1);

    return 0;
}