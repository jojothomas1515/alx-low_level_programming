#include "main.h"

/**
 * print_number - print number to the standard output
 * @n: number to be printed
 */
void print_number(int n)
{
	_lu_int num = n;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if ((num / 10) != 0)
		print_number((num / 10));
	_putchar((num % 10) + 48);
}
