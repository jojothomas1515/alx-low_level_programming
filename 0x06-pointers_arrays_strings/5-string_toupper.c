/**
 * string_toupper - convert string to uppercase
 * @a: target string
 * Return: pointer to a
 */
char *string_toupper(char *a)
{
	int i;
	char c;

	for (i = 0; a[i] != '\0'; i++)
	{
		c = 'a';

		while (c < 'z')
		{
			if (c == a[i])
			{
				a[i] = a[i] + 32;
			}
			c++;
		}
	}
	return (a);
}
