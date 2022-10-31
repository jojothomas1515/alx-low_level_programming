#include "main.h"

/**
 * _strstr - finds the first substring
 * @haystack: haystack
 * @needle: needle
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, f = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			f = 0;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					f = 1;
					break;
				}
			}
			if (f != 1)
				return ((haystack + i));

		}
		i++;
	}
	return (NULL);
}
