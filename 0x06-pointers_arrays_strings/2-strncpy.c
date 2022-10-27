#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for(i = 0; src[i] != '\0' && i < n; i++)
	{
		if (src[i] == NULL && i < n)
		{
			dest[i] = " ";
		}

		dest[i] = src[i];
	}
	return (dest);
}