#include "main.h"

/**
 * print_sign - print sign of input number
 * @n: digit parameter
 *
 * Description: long desc
 * Return: 1 for positive , -1 for negative and 0 for 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
