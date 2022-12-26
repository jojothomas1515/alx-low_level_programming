#include "main.h"

/**
 * divisors - number is prime?
 * @n: integer params
 * @m: integer params
 * Return: boolean
 */

int divisors(int n, int m)
{

	while (m < n)
	{
		if ((n % m) == 0)
			return (0);
		m++;
	}
	return (1);
}

/**
 * is_prime_number - prime
 * @n: integer params
 * Return: recursion
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else if (((n % 2) == 0) || n < 2)
		return (0);
	if (n == 3)
		return (1);

	return (divisors(n, 3));
}
