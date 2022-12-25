#include "main.h"

/**
 * num_length - computes the length of a number
 * @n: number passed as argument
 * Return: length of a number
 */
int num_length(int n)
{
	int num = n, len = 0;

	while (num != 0)
	{
		len += 1;

		num = num / 10;
	}
	return (len);
}

/**
 * print_number - print number to the standard output
 * @n: number to be printed
 */
void print_number(int n)
{
	int num = n, i = 0;
	int len = num_length(num);
	char num_str[1024];

	num_str[len] = '\0';
	len--;
	if (num == 0)
		_putchar('0');
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	while (num != 0)
	{
		num_str[len] = (num % 10) + 48;
		num /= 10;
		len--;
	}

	while (num_str[i] != '\0')
		write(1, &num_str[i++], 1);
}
