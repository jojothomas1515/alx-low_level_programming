#include "main.h"

/**
 * _strlen - length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen(s + 1));
	}
	return (0);
}
