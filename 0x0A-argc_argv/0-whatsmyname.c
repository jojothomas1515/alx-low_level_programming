#include <stdio.h>

/**
 * main - program entry point
 * @argc: command line argument count
 * @argv: command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
