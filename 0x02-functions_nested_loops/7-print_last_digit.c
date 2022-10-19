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
	int result = num % 10;

	if (result >= 0)
	{
	}
	else
	{
		result = result * -1;
	}
	_putchar(result + 48);
	return (result);
}
