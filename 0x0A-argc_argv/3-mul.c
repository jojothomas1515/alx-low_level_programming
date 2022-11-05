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
	int result;

	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return (1);
	} else
	{
		result = atoi(argv[1]) * atoi(argv[2]);

	}
	return (0);
}
