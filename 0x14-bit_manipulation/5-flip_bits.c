#include "main.h"

/**
 * flip_bits - This function returns the number of bit needed to be fliped to
 * the other number
 * @n: The first num
 * @m: The second num
 * Return: th number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (set_bits(n ^ m));
}

/**
 * set_bits - return the set bits count
 * @n: the number
 * Return: count
 */

unsigned int set_bits(unsigned long int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
