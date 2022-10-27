#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char arr[12] = "jojo tsklsd", arr2[32] = "jojo thomas";

	while (1)
	{
		if (*arr != *arr2)
		{
			printf("%p\n", *arr - *arr2 );
			return 1;
		}
		if(*arr == '\0')
		{
			return 0;
		}

		arr++;
		arr2++;

	}
}