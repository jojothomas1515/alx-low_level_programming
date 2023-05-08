#include "search_algos.h"

/**
 * linear_search - searching algorithm
 *
 * Description: searcing algorithm that iterate through the
 * the entire it find a value that matches the target value
 *
 * @array: the array to search
 * @size: size of the array
 * @value: value to search
 *
 * Return: @value index if found else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
