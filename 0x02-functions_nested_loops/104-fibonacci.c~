#include <stdio.h>

/**
 * main - entry point for my function
 * Description: This program prints fib number
 * Return: 0
 */

int main(void)
{
	long int i, nt;
	long int f = 0, s = 1;

	nt = f + s;

	for (i = 0; i < 50; i++)
	{
		printf("%ld", nt);
		if (i != 49)
		{
			putchar(',');
			putchar(' ');
		}

		f = s;
		s = nt;
		nt = s + f;
	}
	printf("\n");
	return (0);
}
