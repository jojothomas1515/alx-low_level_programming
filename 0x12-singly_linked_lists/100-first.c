#include <stdio.h>

void __attribute__((constructor)) print_line(void);

/**
 * print_line - prints a string
 */
void print_line(void)
{
	printf("You're beat! and yet, you must allow,\nI \
	bore my house upon my back!\n");
}
