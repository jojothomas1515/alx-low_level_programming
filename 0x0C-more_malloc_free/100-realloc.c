#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: pointer to the memory address
 * @old_size: the old size of memory
 * @new_size: the size of memory
 * Return: returns  a pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (ptr == NULL && new_size != 0)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}

	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
