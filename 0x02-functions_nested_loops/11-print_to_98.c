#include <stdio.h>

/**
 * print_to_98 - print numeric sequnce to the number 98
 * @n: numeric sequence starting point
 *
 * Description: done
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
                        {
                                printf("%d\n", n);
                                continue;
                        }

			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				continue;
			}
			printf("%d, ", n);
                        n--;
                }
	}
	else{
		printf("%d\n", 98);
	}
}
