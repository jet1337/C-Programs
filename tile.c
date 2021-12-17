#include <stdio.h>
#include <stdlib.h>

int tile()
{
    float bal = 10000.0; //balance
    int year = 0;       // year
    float intr = .05;   //interest

    while(bal < 20000.0){
        bal += bal * intr;
        year++;
    }

    printf("The current balance is %f at year %d", bal, year);

    return(0);
}
