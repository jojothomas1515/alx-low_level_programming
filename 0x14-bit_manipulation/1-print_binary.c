#include "main.h"
#include <stdio.h>

_ul_int bit_length(_ul_int n);

/**
 * print_binary - converts int to binary
 * @n: integer to convert
 */

void print_binary(unsigned long int n)
{

	_ul_int mask = 1;

	if (n <= 0)
	{
		_putchar('0');
	}
	else
	{
		mask = mask << bit_length(n);

		while (mask > 0)
		{
			_putchar((n & mask ? '1' : '0'));

			mask >>= 1;
		}
	}
}

_ul_int bit_length(_ul_int n)
{

	_ul_int num = n;
	long int i = 0;

	while (!((num >> i) <= 0))
	{
		i++;
	}
	i--;
	return (i);
}
