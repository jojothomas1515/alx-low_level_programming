/**
 * cap_string - capitalize string
 * @s: string param
 * Return: address to  the string
 */
char *cap_string(char *s)
{
	int i=0;

	while (s[i] != 0)
	{
		if (s[i] ==  ' ' && !(s[i + 1] >= 101 && s[i + 1] <= 132))
		{
			s[i + 1] = s[i + 1] - 31;
		}
	}
}
