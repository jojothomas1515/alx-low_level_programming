#include "function_pointers.h"

/**
 * int_index - get the index of an inter
 * @array: array to iterate
 * @size: size of the array
 * @cmp: Comparison function
 * Return: index if found or -1 if note
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
