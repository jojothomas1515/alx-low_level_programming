#include "main.h"

/**
 * main - multiply two number
 * @ac: args count
 * @av: args variable
 */
int main(int ac, char *av[])
{
	int i;
	unsigned long result = 0;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; av[1][i] != '\0'; i++)
	{
		if (av[1][i] < 48 || av[1][i] > 57)
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; av[2][i] != '\0'; i++)
	{
		if (av[2][i] < 48 || av[2][i] > 57)
		{
			printf("Error\n");
			exit(98);
		}
	}

	result = (atoi(av[1]) * atoi(av[2]));

	printf("%lu\n", result);
	return (0);
}
