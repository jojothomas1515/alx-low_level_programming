#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts int to binary
 * @n: integer to convert
 */

void print_binary(unsigned long int n)
{
	int num =(int) n;
	int i = 0;

	if (n <= 0)
	{
		_putchar('0');
	}
	else
	{
		while (!((num >> i) <= 0))
		{
			i++;
		}
		i--;
		while (i >= 0)
		{
			_putchar(((num >> i) & 1) + '0');
			i--;
		}
	}
}
