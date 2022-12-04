#include "main.h"

#define CHAR_BITS 8
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * set_bit - set a bit at a specif index
 * @n: pointer to the integer
 * @index: of the bit to set
 * Return: 1 if success , -1 if it does not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int flag=0;

	if (!(index > INT_BITS))
	{
		(*n) = n + (1 << n);
		return (1);
	}
	return (-1);
}
