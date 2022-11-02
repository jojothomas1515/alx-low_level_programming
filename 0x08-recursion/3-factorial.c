/**
 * factorial - finds the n factorial
 * @n: number
 * Return: 0;
 */

int factorial(int n)
{
	return (n * factorial(n - 1));
}
