#include <stdio.h>
#define UNUSED(X) void(x);

/**
 * main - program entry point
 * @argc: command line argument count
 * Return: 0
 */
int main(int argc, char (*argv[]))
{
	(void) argv;
	printf("%d\n", argc);
	return (0);
}
