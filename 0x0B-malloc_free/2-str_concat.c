#include "main.h"

/**
 * str_concat - concatenate two strings and return the mem addr
 * of the new string
 * @s1: destination
 * @s2: source
 * Return: new addr
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int s1_LEN, s2_LEN, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	s1_LEN = strlen(s1);
	s2_LEN = strlen(s2);

	ptr = malloc(s1_LEN + s2_LEN + 1);

	if (ptr == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		ptr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}
	i++;
	ptr[i] = '\0';
	return (ptr);
}
