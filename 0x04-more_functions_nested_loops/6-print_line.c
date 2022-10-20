#include "main.h"

/**
 * print_line - print line
 * @n: number of iteration
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
	if (n <= 0)
		_putchar('$');
	_putchar('\n');
}
