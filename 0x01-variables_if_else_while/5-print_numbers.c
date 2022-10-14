#include <stdio.h>

/**
 * main - Program entry point
 *
 * Description: This print all the numbers in base 10
 * Return: Returns 0 as success code
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	putchar('\n');

	return (0);
}
