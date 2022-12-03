#include <stdio.h>
#include <limits.h>
#include "../main.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%lu\n",ULONG_MAX);
	print_binary(ULONG_MAX);
	printf("\n");
	return (0);
}
