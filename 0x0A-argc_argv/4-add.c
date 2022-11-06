#include "main.h"


/**
 * main - program entry point
 * @argc: command line argument count
 * @argv: command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		int sum;
		int i;

		for (i = 1; i < argc; i++)
		{
			if (_containChar(argv[i]))
			{
				sum += atoi(argv[i]);
			} else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);

	}
}

/**
 * _containChar - char if argument pass to the program contains a character
 * @s: argv argument
 * Return: 0 for flase 1 for true
 */

int _containChar(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) < 48 || (*(s + i) > 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
