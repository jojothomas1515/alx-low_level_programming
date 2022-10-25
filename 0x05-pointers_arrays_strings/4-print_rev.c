#include "main.h"

/**
 * print_rev - print the rev of the string
 * @s: the string variable to be evaluated
 */

void print_rev(char *s)
{
	int count = 0;
	while (s[count] != '\0')
	{
		count++;
	}

	for (--count; s[count] >= 0; --count )
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
