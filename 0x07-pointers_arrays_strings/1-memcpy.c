#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest
 * @dest: destination memory
 * @src: source memory
 * @n: n bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
