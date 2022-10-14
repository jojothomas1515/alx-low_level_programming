#include <stdio.h>

/**
 * main - Program Entry Point
 *
 * Description: Long desc
 * Return: Returns 0 as success code
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
