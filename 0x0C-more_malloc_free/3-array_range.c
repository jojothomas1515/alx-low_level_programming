#include "main.h"

/**
 * array_range - make and array with element withing the range of min and max
 * @min: minimum range value
 * @max: maximum range value
 * Return: the address to  the array
 */

int *array_range(int min, int max)
{
	unsigned int size, i;
	int *ptr;

	if (min > max)
		return (NULL);

	size = max - min;
	ptr = malloc(size * sizeof(int) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}

	return (ptr);
}
