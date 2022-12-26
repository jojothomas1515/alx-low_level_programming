#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	int *a;
	int c3[3][3] = {
	    {0, 1, 5},
	    {10, 11, 12},
	    {1000, 101, 102},
	};
	a = (int *)c3;
	for (; i < 9; i++)
		printf("%d\n", ((int *)c3)[i]);

	return (0);
}
