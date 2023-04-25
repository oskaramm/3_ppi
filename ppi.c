#include "ppi.h"
#include "gpiote.h"


void init_PPI(){
    PPI->CHENSET = 31;
    PPI->PPI_CH[0].EEP = (uint32_t)&(GPIOTE->EVENTS_IN[5]);
    PPI->PPI_CH[0].TEP = (uint32_t)&(GPIOTE->TASKS_OUT[0]);
}