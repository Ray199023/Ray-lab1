#include "mbed.h"

// main() runs in its own thread in the OS
InterruptIn  bbtn(PC_13);

void buttn_interrupt(){
    _printf("button pressed \r\n");
};


int main()
{
    bbtn.fall(&buttn_interrupt);  
    while (true) {

    }
}

