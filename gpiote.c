#include "gpiote.h"


void init_GPIOTE(){
    GPIOTE->CONFIG[0] = (3 | (28 << 8) | (3 << 16) | (1 << 20));
    GPIOTE->CONFIG[1] = (3 | (11 << 8) | (3 << 16) | (1 << 20));
    GPIOTE->CONFIG[2] = (3 | (31 << 8) | (3 << 16) | (1 << 20));
    GPIOTE->CONFIG[3] = (3 | (5 << 8) | (3 << 16) | (1 << 20) | (1 << 13));
    GPIOTE->CONFIG[4] = (3 | (30 << 8) | (3 << 16) | (1 << 20));
}