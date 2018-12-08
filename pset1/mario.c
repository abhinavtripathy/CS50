#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Variables
    
    int i;
    int j;
    int height;
    
    //Input, checking for valid input
    
    do {
        printf("height: ");
        height = GetInt();    
    }
    while (height < 0 || height > 23);
    
    //Looping to print either a '#' or a space
    
    for(i = 0; i <= height - 1; i++)  
    {
        for(j = 0; j <= height ; j++)
        {
            int sum = i + j;
            if(sum >= height - 1) 
            {
                printf("#");
            }
            else 
            {
                printf(" ");
            }
        }
        
        //Going to the next line
        printf("\n");
    }
}