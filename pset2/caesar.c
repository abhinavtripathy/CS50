#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, string argv[]) 
{
    //Variables
    
    int key; 
    int s; 
    int r;
    bool validkey = false;
    
    //Checking for valid input, Converting string to integer
    
    do {
        if (argc != 2) {
            printf("You have entered an invalid input, please retry\n");
            return 1;
        }
        else {
            validkey = true;
        }
    }
    while (validkey == false);
    
    key = atoi(argv[1]);
    
    if (key < 1) {
        return 0;
    }
    
    //input
    
    string pt = GetString();
    
    //Convesion to Cipher
    
    for(int i = 0; i < strlen(pt); i++) {
        
        if (isalpha(pt[i])) {
            
            if (isupper(pt[i])) {
                s = pt[i];
                s = s - 65;
                s = ((s + key) % 26) + 65; 
                printf("%c", s);
            }
            if (islower(pt[i])) {
                r = pt[i];
                r = r - 97;
                r = ((r + key) % 26) + 97; 
                printf("%c", r);
            }
            
        }
        else {
            printf("%c", pt[i]);
        }
        
    }
    printf("\n");
    
}