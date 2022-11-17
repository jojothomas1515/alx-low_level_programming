#include "function_pointers.h"

int size_of_array(int **array);

/**
 * array_iterator - yes
 * @array: target array
 * @size: array size
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (index = 0; index < size; index++)
			action(array[index]);
	}
	exit(1);
}

