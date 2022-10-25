#include "main.h"

/**
 * print_rev - print the rev of the string
 * @s: the string variable to be evaluated
 */

void print_rev(char *s)
{
	int count = 0;

	while (*(s + count))
	{
		count++;
	}
	count++;


	while (count)
	{
		_putchar(*(s + count - 2));
		count--;
	}
	_putchar('\n');
}
