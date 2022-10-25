#include "main.h"

/**
 * print_rev - print the rev of the string
 * @s: the string variable to be evaluated
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s  != '\0')
	{
		count++;
		s++;
	}

	while (!(count < -1))
	{
		_putchar(s[count]);
		s--;
		count--;
	}
	_putchar('\0');
}
