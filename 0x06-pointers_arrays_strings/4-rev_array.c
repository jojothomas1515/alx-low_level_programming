/**
 * reverse_array - reverse the array of a int
 * @a: pointer to the array
 * @n: size of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n--;
	while (i <= n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
