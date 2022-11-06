#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argc: command line argument count
 * @argv: command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)
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
