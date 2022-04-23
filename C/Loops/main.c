#include <stdio.h>

// To call forloop you have to specific number & loops
// number = what is the start number
// loops = how much time you want to be executed same loop
int forloop(int number, int loops)
{
    int i;
    for (i = number; i <= loops; i++)
    {
        printf("%d <- Present the number of current loop \n", i);
    }
}

int main()
{
    forloop(1, 10);
    return 0;
}