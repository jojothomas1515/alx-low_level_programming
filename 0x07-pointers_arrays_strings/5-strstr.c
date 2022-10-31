#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack, *n = needle;
	int i, j, len = 0, t = 1;

	for (i = 0; h[i] != '\0'; i++)
	{
		if (t)
		{
			len = 0;
			j = 0;
		}
		if (h[i] == n[j])
		{
			j++;
			len++;
			t = 0;
		} else if (n[j] == '\0')
		{
			return (h + i - 1 - j);
		}


	}
	return (NULL);
}
