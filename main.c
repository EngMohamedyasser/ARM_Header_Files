#include "headers.h"
#include "lm4f120h5qr.h"
#include "interface.h"


int main()   
   {
 SYSCTL_RCGCGPIO_R=(1<<5);
GPIO_PORTF_DEN_R|=RED_LED|GREEN_LED|BLUE_LED;
GPIO_PORTF_DIR_R|=RED_LED|GREEN_LED|BLUE_LED;
//PORTF_GPIODATA
while(1){
toggle_bit(GPIO_PORTF_DATA_R,RED_LED);
delay();
}

}

void delay(void){
int counter=0;
while(counter<100000){counter++;}
counter=0;

}