#include "main.h"

/**
* argstostr - concatenate the arg string
 * @ac: arguments count
 * @av: arg value
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	int len, i;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i]; i++)
		len += strlen(av[i]);

	ptr = malloc(sizeof(char) * len + ac);

	for (i = 0; av[i]; i++)
	{
		strcat(ptr, av[i]);
		strcat(ptr, "\n");
		strcat(ptr, "\0");
	}

	return (ptr);
}
