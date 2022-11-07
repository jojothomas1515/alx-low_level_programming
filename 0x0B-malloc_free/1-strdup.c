#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 * @str: the target string
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	i = 0;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(str));

	if (ptr == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		*(ptr + i) = *(str + i);
		i++;
	}
	return (ptr);
}
