#ifndef _HEADERS_H_
#define _HEAERS_H_
#define set_bit(addr,bit) addr=(1<<bit)
#define clear_bit(addr,bit) addr&=~(1<<bit)
#define toggle_bit(addr,bit) addr^=(1<<bit)
#define RCGCGPIO *((unsigned int *)0x400FE608)
#define PORTF_GPIODEN *((unsigned int *)0x4002551C)
#define PORTF_GPIODIR *((unsigned int *)0x40025400)
#define PORTF_GPIODATA *((unsigned int *)0x400253FC)
#define RED_LED (1U<<1)
#define GREEN_LED (1U<<2)
#define BLUE_LED (1U<<3)
#define CLOCK_GATING_BIT (1U<<5)
#endif