#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //Variables
    
    int noc = 0; //Number of Coins
    int cl; //Change Left
    float n; //Input
    
    //Input, checking for valid input 
    
    do {
        printf("How much change is owed?\n");
        n = GetFloat();
    }
    while (n < 0);
    
    //Rounding, Conversion to an integer
    
    n = n * 100;
    n = round(n);
    cl = (int) n;
    
    //Deducting Change Left, incrementing Number of Coins
    
    while (cl / 25 > 0) {
        cl = cl - 25;
        noc++;
    }
    while (cl / 10 > 0) {     
        cl = cl - 10;
        noc++;
    }    
    while (cl / 5 > 0) {
        cl = cl - 5;
        noc++;
    }    
    while (cl / 1 > 0) {
        cl = cl - 1;
        noc++;
    }    
     
    printf("%i\n", noc);
    
}    