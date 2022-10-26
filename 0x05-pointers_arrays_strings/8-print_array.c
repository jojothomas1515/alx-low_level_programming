#include "main.h"

/**
 * print_array - print the n elements of an array integers
 * @a: the array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ((i % 2) == 0)
		{
			if (!(i == (n - 1)))
			{
				printf("%ld, ", a[i]);
			}
			else
			{
				printf("%ld", a[i]);
			}
		}
	}
	_putchar('\n');
}
