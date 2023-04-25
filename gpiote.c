#include "gpiote.h"
#include "gpio.h"


void init_GPIOTE(){

    // Button A
    GPIO0->PIN_CNF[14] = 0;

    // Led Col
    GPIO0->PIN_CNF[28] = 1; //Col 1
    GPIO0->PIN_CNF[11] = 1; //Col 2
    GPIO0->PIN_CNF[31] = 1; //Col 3
    GPIO1->PIN_CNF[5] = 1;  //Col 4
    GPIO0->PIN_CNF[30] = 1; //Col 5 

    // Led set row
    GPIO0->OUTSET = (1 << 21); //Row 1
    GPIO0->OUTSET = (1 << 22); //Row 2
    GPIO0->OUTSET = (1 << 15); //Row 3
    GPIO0->OUTSET = (1 << 24); //Row 4
    GPIO0->OUTSET = (1 << 19); //Row 5

    // Led clear col
    GPIO0->OUTSET = ((1 << 28) | (1 << 11) | (1 <<31) | (1 << 30));
    GPIO1->OUTSET = (1 << 5);

    
    GPIOTE->CONFIG[0] = (3 | (28 << 8) | (3 << 16) | (1 << 20));
    GPIOTE->CONFIG[1] = (3 | (11 << 8) | (3 << 16) | (1 << 20));
    GPIOTE->CONFIG[2] = (3 | (31 << 8) | (3 << 16) | (1 << 20));
    GPIOTE->CONFIG[3] = (3 | (5 << 8) | (3 << 16) | (1 << 20) | (1 << 13));
    GPIOTE->CONFIG[4] = (3 | (30 << 8) | (3 << 16) | (1 << 20));
    GPIOTE->CONFIG[5] = (1 | (14 << 8) | (2 << 16) | (0 << 20)); //fallende flanke?
}