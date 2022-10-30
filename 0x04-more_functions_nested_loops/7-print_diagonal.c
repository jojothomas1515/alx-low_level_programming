#include "main.h"

/**
 * print_diagonal - print diag
 * @n: num of iteration
 *
 * Description: done
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i - 1; j++)
			{
				if (i != 1)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('$');
			_putchar('\n');
		}
	}
}
