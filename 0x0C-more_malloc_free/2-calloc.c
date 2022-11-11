#include "main.h"

/**
 * _calloc - allocate memory to nmemb number of elements
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer to the memory address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	int  *ptr;
	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i  < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
