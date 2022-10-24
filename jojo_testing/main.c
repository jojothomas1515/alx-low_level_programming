//
// Created by Jojo Thomas on 10/24/2022.
//

#include "main.h"

int main(void)
{
    int j = 22;
    int *ptr, **ptr2;

    ptr = &j;
    ptr2 = &ptr;


    printf(" pointer address %x, pointer %d, pointer if a pointer %d \n", ptr, *ptr, **ptr2);
    _putchar('J');
    _putchar('O');
    _putchar('J');
    _putchar('O');
    _putchar('\n');
    return (0);
}


