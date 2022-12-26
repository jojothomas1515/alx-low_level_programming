#include "main.h"
int _strlen(char *str);

/**
 * is_palindrome - test if a string is palindrome
 * @s: target string
 * Return: 1 is true, 0 if false
 */
int is_palindrome(char *s)
{
	int len = 0, i = 0, flag = 1;

	len = _strlen(s);
	len--;

	while (i != (len / 2))
	{
		if (s[i] == s[len - i])
		{
			i++;
			continue;
		}
		else
			return (0);
	}
	return (1);
}

/**
 * _strlen - compute the length of a string
 * @str: target string
 * Return: length
 */
int _strlen(char *str)
{
	char *s = str;
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
