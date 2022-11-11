#include "main.h"

int _strlen(char *);

/**
 * string_nconcat - concatenate two strings by n bytes
 * @s1: first String
 * @s2: second string
 * @n: number of bytes
 * Return: the mem addr of two the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int length = _strlen(s1), i = 0, j = 0;
	unsigned int length2 = _strlen(s2);

	if (length2 <= n)
		n = length2;

	newstr = malloc(length + 1 + n + 1);
	if (newstr == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		newstr[i] = *s1;
		i++;
		s1++;
	}

	while (*s2 != '\0' && j < n)
	{
		newstr[i] = *s2;
		s2++;
		j++;
		i++;
	}
	i++;
	newstr[i] = '\0';
	return (newstr);
}


/**
 * _strlen -  calculate a strings length
 * @str: target string
 * Return: the length of the string
 */
int _strlen(char *str)
{
	unsigned int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
