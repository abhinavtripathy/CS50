#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) 
{
    //Variables
    
    char key;
    int s;
    int r;
    int j;
    int c;
    int x = 0;
    string pt;
    
    
    
    //Checking for valid input
    
    if ( argc != 2 )    
    {
    printf ("usage : ./caesar + key");
    return 1;
    }
    
    string keyword = argv[1];
    
    int slen = strlen(keyword);
    
    
    for(int z = 0; z < slen; z++)
    {
        if (!isalpha(keyword[z]))
        {   
            printf("Usage: vigenere <key>");
            
            printf("Non-alphabetic characters given. Aborting.");
            
            return 1;
        }
    }
    

    //input
    
    do {
        pt = GetString();
    }
    while (strlen(pt) == 0);
    
    //Convesion to Cipher
    
    for(int i = 0; i < strlen(pt); i++) {
        
        j = x  % slen;
        key = keyword[j];
        
        if (isupper(key)) {
            c = key - 65;
        }
        if (islower(key)) {
            c = key - 97;
        }
        
        if (isalpha(pt[i])) {
            
            if (isupper(pt[i])) {
                s = pt[i];
                s = s - 65;
                s = ((s + c) % 26) + 65; 
                printf("%c", s);
            }
            
            if (islower(pt[i])) {
                r = pt[i];
                r = r - 97;
                r = ((r + c) % 26) + 97; 
                printf("%c", r);
            }
            x++;
            
        }
        else {
            printf("%c", pt[i]);
        }
        
    }
    printf("\n");
    
    return 0;
    
} 