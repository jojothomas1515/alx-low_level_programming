#include "function_pointers.h"

/**
 * array_iterator - yes
 * @array: target array
 * @size: array size
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (!(size) || size < 1)
		exit(1);
	if (!action)
		exit(1);

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
