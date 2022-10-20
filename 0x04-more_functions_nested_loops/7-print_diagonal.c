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
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('$');
			_putchar('\n');
		}
	}
}
