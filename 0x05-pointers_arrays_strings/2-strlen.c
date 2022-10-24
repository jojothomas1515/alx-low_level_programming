#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: string variable
 * @return: 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s  != '\0')
	{
		count++;
		s++;
	}
	return count;
}