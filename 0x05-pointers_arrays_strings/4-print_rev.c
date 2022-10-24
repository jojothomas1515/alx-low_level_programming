#include "main.h"

/**
 * print_rev - print the rev of the string
 * @s: the string variable to be evaluated
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len != 0)
	{
		_putchar(s[len]);
		len--;
	}
}
