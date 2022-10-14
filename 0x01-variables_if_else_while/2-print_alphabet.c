#include <stdio.h>

/**
 * main - main entry point for my program
 *
 * Description: Long Description
 * Return: done don done
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);

		if (alpha == 'z')
		{
			putchar('\n');
		}
		alpha++;

	}

	return (0);
}
