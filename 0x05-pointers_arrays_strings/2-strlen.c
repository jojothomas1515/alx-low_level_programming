#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @param @s: string variable
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s  != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
