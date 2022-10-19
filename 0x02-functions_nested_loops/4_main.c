#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_last_digit(-2147483648);
	printf("%d and the last digit is %d \n", INT_MIN,r);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
