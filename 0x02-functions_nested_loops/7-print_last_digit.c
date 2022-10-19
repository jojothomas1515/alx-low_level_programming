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
	}
	_putchar((num % 10) + 48);
	return (num % 10);
}
