/**
 * _strspn - gets the length of a substring
 * @s: main string
 * @accept: sub string
 * Return: c
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, c = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			c++;
		} else
		{
			c = 0;
		}
	}
	return (c);
}
