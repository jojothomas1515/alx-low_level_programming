#include "main.h"

/**
 * print_diagsums - Write a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: target matrix
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{

	int i, SUM1, SUM2;

	SUM1 = 0;
	SUM2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			SUM1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			SUM2 += a[i];
	}
	printf("%d, %d\n", SUM1, SUM2);

}
