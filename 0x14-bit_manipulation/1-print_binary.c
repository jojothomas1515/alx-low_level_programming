#include "main.h"

/**
 * print_binary - converts int to binary
 * @n: integer to convert
 */

void print_binary(unsigned long int n)
{
	char b_str[B_BUFF_SIZE];
	_ul_int num = n, i = 0;

	while (!(n <= 0))
	{
		b_str[i] = (num % 2) + '0';
		i++;
	}
}