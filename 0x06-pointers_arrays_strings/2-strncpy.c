#include "main.h"

/**
 * _strncpy - concat string  by an number of bytes
 * @dest: target or destination
 * @src: source
 * @n: bytes
 * Return: a pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		if (*dest == '\0')
			return (dest);
		src++;
		dest++;
	}
	return (dest);
}
