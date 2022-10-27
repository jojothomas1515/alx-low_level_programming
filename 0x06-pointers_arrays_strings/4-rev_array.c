/**
 * reverse_array - reverse the array of a int
 * @param a
 * @param n
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