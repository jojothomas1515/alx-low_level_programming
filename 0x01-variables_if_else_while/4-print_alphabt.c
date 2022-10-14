#include <stdio.h>

/**
 * main - Program Entry Point
 *
 * Description: This program with print all alphaber except q and e
 * Return: Returns 0 as Success
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha++;
			continue;
		}
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
}
