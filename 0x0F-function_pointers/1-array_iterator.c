#include "function_pointers.h"

/**
 * array_iterator - yes
 * @array: target array
 * @size: array size
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size == NULL || size < 0)
		exit(1);
	if (action == NULL)
		exit(1);
	int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
