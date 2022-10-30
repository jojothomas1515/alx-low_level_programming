#include <stdio.h>

/**
 * main - entry point for my function
 * Description: This program prints fib number
 * Return: 0
 */

int main(void)
{
	long int i, nt, sum = 0;
	long int f = 0, s = 1;

	nt = f + s;

	for (i = 0; i < 4000000; i++)
	{
		if (nt >= 4000000)
			break;
		if ((nt % 2) == 0)
		{
			sum += nt;
		}
/*
 * printf("%ld", nt);
*		if (i != 49)
*		{
*			putchar(',');
*			putchar(' ');
*		}
*/

		f = s;
		s = nt;
		nt = s + f;
	}
	printf("%ld\n", sum);
	return (0);
}
