#include <stdio.h>

/**
 * main - Program entry point
 *
 * Description: print alphabet in reverse
 * Return: return 0 as success code
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
