#include "main.h"

/**
 * print_line - print line
 *
 * Description: done
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('$');
	_putchar('\n');
}
