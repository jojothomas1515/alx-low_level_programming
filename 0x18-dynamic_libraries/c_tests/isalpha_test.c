#include "../main.h"

/**
 * main - entry point for my program
 * Return: 0 always
 */

int main(void)
{
	char cn[] = "aAbBcCdDeEfF-1234567./,.asfdg";
	int i = 0;

	while (cn[i])
	{
		printf("the char %c is %s\n", cn[i],
		       _isalpha(cn[i]) ? "alpha" : "not alpha");
		i++;
	}
	return (0);
}
