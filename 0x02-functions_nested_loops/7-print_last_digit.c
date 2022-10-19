#include "main.h"

/**
 * print_last_digit - print the last digit of any number
 * @num: the digit
 *
 * Description: prints last digit
 * Return: The last digit
 */

int print_last_digit(int num)
{
	if (num < 0)
	{
		num = num * -1;
		num = num % 10;
	}
	_putchar((num % 10) + '0');
	return ((num % 10));
}
