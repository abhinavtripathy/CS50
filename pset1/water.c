#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("minutes: ");
    int x = GetInt();
    int y = x * 12;
    printf("Bottles: %i\n", y);
}