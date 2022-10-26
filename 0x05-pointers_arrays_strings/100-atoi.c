/**
 * _atoi - return the number in found in  STRING
 * @s: string to be processed
 * Return: and an integer
 */

int _atoi(char *s)
{
	unsigned int sign = 1, i;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
		}
		else if (num > 0)
		{
			break;
		}
	}
	return (sign * num);
}
