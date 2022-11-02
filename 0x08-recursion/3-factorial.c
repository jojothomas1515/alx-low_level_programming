/**
 * factorial - finds the n factorial
 * @n: number
 * Return: 0;
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
