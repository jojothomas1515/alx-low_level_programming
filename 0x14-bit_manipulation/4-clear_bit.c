#include "main.h"


/**
 * clear_bit - clear the bit on a set index
 * @n: pointer to  the target integer
 * @index: index of bit to clear
 * Return: 1 for success or -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (*n == 0)
	{
		return (1);
	}
	else if (*n > 0)
	{
		*n = *n - (1 << index);
		return (1);
	}

	return (-1);
}
