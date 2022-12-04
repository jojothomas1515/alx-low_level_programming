#include "main.h"
0;115;0c#define CHAR_BITS 8
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * get_bit - get the bit value at a specific index
 * @n: integer
 * @index: the target index in binary
 * Return: 1 or 0 if successful ,-1 if not
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (!(index > INT_BITS))
	{
		return ((n >> index) & 1);
	}
	return (-1);
}
