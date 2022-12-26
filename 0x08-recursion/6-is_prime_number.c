#include "main.h"

/**
 * divisors - number is prime?
 * @n: integer params
 * @m: integer params
 * Return: boolean
 */

int divisors(int n, int m)
{
	if ((n % m) == 0)
		return (0);

	if (m < n)
		return (divisors(n, m + 2));
}

/**
 * is_prime_number - prime
 * @n: integer params
 * Return: recursion
 */

int is_prime_number(int n)
{
	if (n == 2 || n < 2)
	{
		return (0);
	}
	else if ((n % 2) == 0)
		return (0);

	return (divisors(n, 3));
}
