#include "main.h"

/**
 * print_rev - print the rev of the string
 * @s: the string variable to be evaluated
 */

void print_rev(char *s)
{
	int count = 0;

	while (*(s + count)  != '\0')
	{
		count++;
	}

	while (!(count < -1))
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar('\0');
	_putchar('\n');
}
