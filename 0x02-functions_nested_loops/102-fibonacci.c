#include <stdio.h>

/**
 * main - entry point for my function
 * Description: This program prints fib number
 * Return: 0
 */

int main(void)
{
	int i, nt;
	int f = 0, s = 1;

	nt = f + s;

	 for (i = 0; i <10; i++)
	 {

		 printf("%d", nt);
		 if (i != 9)
			 putchar(',');
		 printf("\n");

		 f = s;
		 s = nt;
		 nt = s + f;
	 }
	return (0);
}