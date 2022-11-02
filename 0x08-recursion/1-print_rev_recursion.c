#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - recursion
 * @s: string
 */


int _strlen(char *s);

void _print_rev_recursion(char *s)
{
	int length = _strlen(s);

	if (length != 0)
	{
		_putchar(*s + (length - 1));
		_print_rev_recursion(((s - 1 ) + (length -1)));

	}
	else
		_putchar('\n');
}

int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen(s + 1));
	}
	return (0);
}


