#include "main.h"

/**
 * wildcmp - compare two strings where the second string can have a wildcard
 * @s1: first string
 * @s2: second string
 * Return: 1 if string is the same, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	char *str1 = s1, *str2 = s2;

	if (*(str1) == '\0' && *(str2) == '\0')
		return (1);
	if (*str1 == *str2)
		return (wildcmp(str1 + 1, str2 + 1));
	if (*str2 == '*')
	{
		if (*(str2 + 1) == '*')
			return (wildcmp(str1, str2 + 1));
		if (wildcmp(str1 + 1, str2) || wildcmp(str1, str2 + 1))
			return (1);
	}
	return (0);
}
