/**
 * reverse_array - reverse the array of a int
 * @param a
 * @param n
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}

}