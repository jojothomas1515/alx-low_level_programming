#include "main.h"
/**
 * _strncpy - concat string  by an number of bytes
 * @dest: target or destination
 * @src: source
 * @n: bytes
 * Returns a pointer to destination
 */
char *_strncpy (char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		if (i < n)
		{
			dest[i] = ' ';
		}

		dest[i] = src[i];
	}
	return (dest);
}