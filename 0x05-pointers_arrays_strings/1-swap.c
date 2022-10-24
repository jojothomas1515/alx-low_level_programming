/**
 * swap_int - swaps the value of two integers
 * @a: address of the first variable
 * @b: address if the second variable
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = a;

	*a = *b;
	*b = temp;
}
