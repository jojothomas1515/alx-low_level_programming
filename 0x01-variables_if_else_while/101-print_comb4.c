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
	int dig3 = 1;
	int dig4;
	int dig5 =2;

	while (dig1 < 8)
	{
		dig2 = dig3;

		while (dig2 < 9)
		{
			dig4 = dig5;
			while (dig4 < 10)
			{
				putchar(dig1 + '0');
				putchar(dig2 + '0');
				putchar(dig4 + '0');

				if (dig1 == 7 && dig2 == 8 && dig4 == 9)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				dig4++;
			}
			dig5++;
			dig2++;
		}

		dig3++;
		dig1++;
	}
	putchar('\n');

	return (0);
}
