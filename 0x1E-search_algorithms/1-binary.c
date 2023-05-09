#include "search_algos.h"

/**
 * print_array - print the value in an array iteratively
 *
 * @array: the array to be printed
 * @start: the start postion of the iteration
 * @end: the stop position of the iteration
 */

void print_array(int *array, int start, int end)
{
	int i;

	if (array == NULL)
		return;
	printf("Searching in array: ");
	for (i = start; i <=  end; i++)
	{
		if (i == end)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}

/**
 * binary_search - searching algorithm
 *
 * Description: searcing algorithm that divide the array in 2
 * recursively and searching only the side that the value might be found
 * till it finds a value that matches the target value
 *
 * @array: the array to search
 * @size: size of the array
 * @value: value to search
 *
 * Return: @value index if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0, mid, end = size - 1;

	if (array == NULL)
		return (-1);

        while (start <= end)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
