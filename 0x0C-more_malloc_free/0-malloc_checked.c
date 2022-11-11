#include "main.h"

/**
 * malloc_checked - if memory allocation failed it exit with a status code 98
 * @b: number of bytes
 * Return: memory address if successful , or exit with status code 98
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
