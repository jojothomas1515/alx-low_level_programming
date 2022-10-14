#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program
 * Return: returns 0
 */

int main(void)
{
	int dig1 = 0;
	int dig2;

	while (dig1 < 9)
	{
		dig2 = 0;

		while (dig2 < 10)
		{
			if (dig1 == 0 && dig2 == 0)
			{
				dig2++;
				continue;
			}
			putchar(dig1 + '0');
			putchar(dig2 + '0');
			putchar(',');
			putchar(' ');
			dig2++;
		}

		dig1++;
	}
	putchar('\n');

	return (0);
}
