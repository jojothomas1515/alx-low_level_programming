//
// Created by Jojo Thomas on 10/24/2022.
//
#include <unistd.h>

/**
 * _putchar - print out a character
 * @param c : character to be printed
 */

void _putchar(char c) {

    char *ptr = &c;

    write(1, ptr, 1);
}