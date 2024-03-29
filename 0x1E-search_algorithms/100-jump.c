#include "search_algos.h"

/**
 * jump_search - searching algorithm
 *
 * Description: The algorithm iterates through blocks at a time
 * till it finds a value greater than the target value, then it does
 * a linear search to get the actual value.
 * The size of the step/width of each block is determine by getting the
 * square root of  the array size
 *
 * @array: the array to search
 * @size: the size of @array
 * @value: the value to search for in @array
 *
 * Return: The index of @value in @array
 */

int jump_search(int *array, size_t size, int value)
{
	int point = 0, step = (int)sqrt(size), i;

	for (point = 0; point < (int)size; point += step)
	{
		if (array[point] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
				       point - step, point);
			for (i = point - step; i <= point; i++)
			{
				printf("Value checked array[%d] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
		printf("Value checked array[%d] = [%d]\n",
		       point, array[point]);
	}
	return (-1);
}
