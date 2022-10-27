/**
 * string_toupper - convert string to uppercase
 * @a: target string
 * Return: pointer to a
 */
char *string_toupper(char *a)
{
	int i;
	i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
