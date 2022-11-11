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
	char *tmp_ptr, *new_ptr;
	unsigned int i;

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

	tmp_ptr = ptr;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		new_ptr[i] = tmp_ptr[i];

	free (ptr);
	return (new_ptr);
}
