#include "main.h"

/**
 * print_diagsums - Write a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: target matrix
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum, sum1;

	sum = sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += (a + i)[i];
	}

	for (i = 0; i < 5; i++)
	{
		j = (size - 1) - i;
		sum1 += (a + i)[j];
	}
	printf("%d, %d\n", sum, sum);

}
