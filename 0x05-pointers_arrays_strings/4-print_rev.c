#include "main.h"

/**
 * print_rev - print the rev of the string
 * @s: the string variable to be evaluated
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}


	while (len != -1)
	{
		_putchar(*s);
		s--;
		len--;
	}
}
