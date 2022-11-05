#include <stdio.h>
#define UNUSED(X) void(x);

/**
 * main - program entry point
 * @argc: command line argument count
 * @argv: command line arguments
 * Return: 0
 */
int main(int argc, char (*argv[]))
{
	(void) argv;
	printf("%d\n", argc - 1 );
	return (0);
}

